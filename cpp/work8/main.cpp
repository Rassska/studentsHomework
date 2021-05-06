#include <bits/stdc++.h>
#define int long long
using namespace std;
 
 
const int maxen = 6e18;
const int Size = 1e5;
    vector <pair <int, pair<int, int>>> edges(Size);
    vector <vector<int>> graph(Size);
    vector <int> d(Size, maxen);
    vector <int> path;
    vector <int> p(Size, -1);
    vector <bool> used(3000, 0);
 
void dfs (int v) {
 
        used[v] = true;
        for (int i = 0; i < graph[v].size(); i++) {
            int to = graph[v][i];
            if (!used[to])
                dfs (to);
        }
        path.push_back(v);
}
 
 
 
signed main()
{

    int n, m, s; // n - quantity of nodes, m - quantity of edges, s - start node
    cin >> n >> m >> s;
    graph.resize(n + 1);
    s--; // if 1 < s 
 
    d[s] = 0; // distance to the first node is equal to zero
    for (int i = 0; i < m; i++) {
        int u, v, weight; // input from/to/weight of curr edge
        cin >> u >> v >> weight;
        u--;
	v--;
        edges[i].first = weight;
        edges[i].second.first = u;
        edges[i].second.second = v;
        graph[u].push_back(v);
    }
 
 
    int checkOnLastIt; // Bellman-Ford algorithm
    for (int i = 0; i < n + 1; i++) {
        checkOnLastIt = -1;
        for (int j = 0; j < m; j++) {
            if (d[edges[j].second.first] < maxen) {
                if (d[edges[j].second.second] > d[edges[j].second.first] + edges[j].first) {
                    d[edges[j].second.second] = max(-maxen, d[edges[j].second.first] + edges[j].first);
                    p[edges[j].second.second] = edges[j].second.first;
                    checkOnLastIt = edges[j].second.second;
                    if (i > n - 1) {
                        path.push_back(checkOnLastIt);
                    }
 
                }
            }
        }
    }
 
    int pathSize = path.size();
    for (int i = 0; i < pathSize; i++) {
        used[path[i]] = true;
    }
    for (int i = 0; i < pathSize; i++) {
        dfs(path[i]);
    }
 
    bool checkCont = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < path.size(); j++) {
            if (path[j] == i) {
                cout << '-' << '\n';
                checkCont = false;
                break;
 
            }
        }
        if (!checkCont) {
            checkCont = true;
            continue;
        }
 
        if (d[i] != maxen) {
            cout << "For the node number: " << i + 1 << " here is shortest distance: "<< d[i] << '\n';
        } else {
            cout << '*' << '\n';
        }
    }
 
 
}
