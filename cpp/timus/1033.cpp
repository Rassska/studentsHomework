#include <bits/stdc++.h>

using namespace std;

char matrix[34][34];
bool visited[34][34];

int n;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

bool isVal (int i, int j) {
    if (j < 0 || j >= n) return 0;
    if (i < 0 || i >= n) return 0;

    return 1;
}

int dfs (int i, int j) {
    
    if (!isVal(i, j) || matrix[i][j] == '#')
        return 1;

    if (visited[i][j])
        return 0;

    visited[i][j] = 1;

    int res = 0;
    for (int k = 0; k < 4; k++)
        res += dfs(i + dx[k], j + dy[k]);

    return res;
}

int main () {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %s", matrix[i]);

    printf("%d\n", 9 * (dfs(0, 0) + dfs(n - 1, n - 1) - 4));
}
