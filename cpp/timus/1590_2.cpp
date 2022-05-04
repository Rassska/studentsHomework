#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;

struct node
{
	map<char, node*> to;
	node *s_link;
	string::iterator begin, end;
	node(string::iterator begin, string::iterator end): s_link(0), begin(begin), end(end) {}
	int len(string::iterator cur_pos) { return min(cur_pos + 1 - begin, end - begin); }
};

struct active_point
{
	node *n;
	string::iterator edge;
	int length;
	active_point(node* n, string::iterator edge, const int length = 0): n(n), edge(edge), length(length) {}
};

struct need_s_link
{
	node *root;
	node *nsl;
	need_s_link(node *root): root(root), nsl(root) {}
	need_s_link& operator()(node *n)
	{
		if( nsl != root ) nsl->s_link = n;
		nsl = n;
		return *this;
	}
};

class s_tree
{
	string str;
	node *root;
	active_point ap;
	int remainder;
	bool walk_down(string::iterator cur_pos, node *n)
	{
		if( ap.length >= n->len(cur_pos) )
		{
			ap.edge += n->len(cur_pos);
			ap.length -= n->len(cur_pos);
			ap.n = n;
			return true;
		}
		return false;
	}
	void add_ch(string::iterator add)
	{
		need_s_link create_s_link(root);
		remainder++;
		while( remainder )
		{
			if( !ap.length ) ap.edge = add;
			map<char, node*>::iterator it = ap.n->to.find(*ap.edge);
			node *next = ( it == ap.n->to.end() ) ? NULL : it->second;
			if( !next )
			{
				node *leaf = new node(add, str.end());
				ap.n->to[*ap.edge] = leaf;
				create_s_link(ap.n);
			}
			else
			{
				if( walk_down(add, next) ) continue;
				if( *(next->begin + ap.length) == *add )
				{
					ap.length++;
					create_s_link(ap.n);
					break;
				}
				node *split = new node(next->begin, next->begin + ap.length);
				node *leaf = new node(add, str.end());
				ap.n->to[ *ap.edge ] = split;
				split->to[ *add ] = leaf;
				next->begin += ap.length;
				split->to[ *next->begin ] = next;
				create_s_link(split);
			}
			remainder--;
			if( ap.n == root && ap.length)
			{
				ap.length--;
				ap.edge = add - remainder + 1;
			}
			else
				ap.n = ( ap.n->s_link ) ? ap.n->s_link : root;
		}
	}
	
	int sub_str_count(node *n)
        {
                int out = 0;
                for(map<char, node*>::iterator it = n->to.begin(); it != n->to.end(); ++it)
                        out += sub_str_count(it->second);
                out += n->len(str.end());
                return out;
        }
	void clear(node* n)
	{
		for(map<char, node*>::iterator it = n->to.begin(); it != n->to.end(); ++it)
			clear(it->second);
		delete n;
	}
	
public:
	s_tree(const string s): str(s), root(new node(str.end(), str.end())), ap(root, str.begin()), remainder(0)
	{
		for(string::iterator it = str.begin(); it != str.end(); it++)
			add_ch(it);
	}
	~s_tree() { clear(root); }
	int substring_count() { return sub_str_count(root); }
};

int main()
{
	std::string s;
	std::cin >> s;
	s_tree st(s);
	std::cout << st.substring_count() << std::endl;
}