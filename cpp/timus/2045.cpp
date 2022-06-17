#include <bits/stdc++.h>

char a[10000];
char* x = "bca";

bool solve(int k, int n)
{
    int u = 0, c = 0;
    if(k > 2)
    {
        for(int i = 0; i < std::min(k - 2, n); i++)
            a[u++] = 'a';

        for(int i = k-2; i < n; i++)
            a[u++] = x[c++ % 3];

        a[u] = 0;

        return true;
    }
    else if(n == k && k < 3)
    {
        for(int i = 0; i < k; i++)
            a[u++] = 'a';
        a[u] = 0;
        return true;
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        bool b = solve(i, n); 
        printf("%d : %s\n", i, (b ? a : "NO"));
    }
}
