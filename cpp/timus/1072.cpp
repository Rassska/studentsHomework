#include <bits/stdc++.h>

int toNum(std::string str) 
{
    int p = 0;
    int num = 0;
    for(int i = 0; i < 4; i++, p++)
    {
        std::string s;
        while(str[p] != '.' && p < str.length())
            s += str[p++];
        num |= ((int) std::stoi(s)) << ((3 - i) * 8);
    }
    return num;
}

struct node 
{
    int id;
    node* p; 
    std::vector<int> e; 
    bool visited;
};

std::unordered_map<int, std::vector<node*>> m; 
node nodes[91];


void addNode(node* n, std::queue<node*>& q)
{
    for(auto i : n -> e)
        for(auto v : m[i])
            if(!v -> visited)
                q.push(v), v -> p = n, v -> visited = true;
}

int main()
{
    int N;
    std::cin >> N;
    for(int i = 1; i <= N; i++)
    {
        int K;
        std::cin >> K;
        while(K--)
        {
            std::string ip, mask;
            std::cin >> ip >> mask;
            auto subnet = toNum(ip) & toNum(mask);
            nodes[i].id = i;
            nodes[i].e.push_back(subnet);
            m[subnet].push_back(nodes + i);
        }
    }
    int s, f;
    std::cin >> s >> f;
    std::queue<node*> Q;
    nodes[s].visited = true;
    addNode(nodes + s, Q);
    while(!Q.empty()) 
    {
        std::vector<node*> v;
        auto n = Q.front();
        addNode(n, Q);
        Q.pop();
    }
    std::stack<node*> st;
    if(!nodes[f].visited)
        std::cout << "No" << std::endl;
    else
    {
        std::cout << "Yes" << std::endl;
        for(auto v = nodes + f; v; v = v -> p)
            st.push(v);
        while(!st.empty())
            std::cout << st.top() -> id << " ", st.pop();
    }
}
