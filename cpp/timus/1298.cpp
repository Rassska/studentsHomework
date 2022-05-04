#include <iostream>


int dir[8][2]={2,1,  1,2  ,-1,2   ,-2,1  ,-2,-1   ,-1,-2  ,  1,-2,  2,-1};
int f[10][10] = {0}, n;
bool flag = false;

void dfs(int t, int x, int y) {
    if (t >= n * n) {
        flag = true; 
        return;
    }
    for (int k = 0; k < 8; k++) {
        int x1 = x + dir[k][0];
        int y1 = y + dir[k][1];
        if (x1 <= 0 || y1 <= 0 || x1 > n || y1 > n) continue;
        if (f[x1][y1] != 0) continue;
        f[x1][y1] = t + 1;
        dfs(t + 1, x1, y1);
        if (flag) return;
        f[x1][y1] = 0;
    }
}


int main() {
    std::cin >> n;
    f[1][1] = 1;
    dfs(1, 1, 1);
    if (!flag) std::cout << "IMPOSSIBLE\n" << std::endl;
    else {
        for (int k = 1; k <= n * n; k++)
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= n; j++) if (f[i][j] == k) {
                    std::cout << char('a' + i - 1) << j << std::endl;
                }
    }
}