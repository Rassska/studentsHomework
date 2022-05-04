#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    dp[1] = 1;
    for (std::size_t i = 0; i <= n; i++){
        for (std::size_t j = 1; i + j * j <= n; j++){
            dp[i + j * j] = std::min(dp[i + j * j], dp[i] + 1);
        }
    }
    std::cout << dp[n];
}