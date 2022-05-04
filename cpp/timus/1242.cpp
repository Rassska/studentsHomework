#include <iostream>
#include <vector>
#include <string>
#include <sstream>


void dfs(int v, const std::vector <std::vector <int> >& g, std::vector <char>& used) {
	used[v] = true;
	for (int i = 0; i < g[v].size(); ++i)
	{
		int node = g[v][i];
		if (!used[node])
			dfs(node, g, used);
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::vector <std::vector <int> > parents(n);
	std::vector <std::vector <int> >children(n);
	std::string s;
	getline(std::cin, s);
	while (getline(std::cin, s))
	{
		if (s == "BLOOD")
			break;
		std::istringstream iss(s);
		int u, v;
		iss >> u >> v;
		parents[u - 1].push_back(v - 1);
		children[v - 1].push_back(u - 1);
	}

	std::vector <char> used(n, false);
	int num;
	while (std::cin >> num)
	{
		dfs(num - 1, parents, used);
		dfs(num - 1, children, used);
	}
	bool found = false;
	for (int i = 0; i < used.size(); ++i)
	if (!used[i])
	{
		found = true;
		std::cout << i + 1 << ' ';
	}
	if (!found)
		std::cout << 0;
	std::cout << std::endl;
}