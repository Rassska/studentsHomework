#include <iostream>
#include <algorithm>
#include <vector>

int dp[901][8101];
int temp[901][8101];

int main() {

    dp[0][0] = 1;
    temp[0][0] = 0;

    for(int s1 = 1; s1 <= 900; s1++) {    
        for(int s2 = 1; s2 <= 8100; s2++) {  
            for(int d = 1; d <= 9; d++) {
                if(s1 - d >= 0 && s2 - d*d >= 0 && dp[s1 - d][s2 - d*d]) {
                    if(dp[s1][s2] == 0 || dp[s1][s2] > 1 + dp[s1 - d][s2 - d*d]) {
                        dp[s1][s2] = 1 + dp[s1 - d][s2 - d*d];
                        temp[s1][s2] = d;
                    }
                }
            }
        }
    }

    int T; std::cin >> T;

    while(T--) {
        int s1, s2; std::cin >> s1 >> s2;

        if(!dp[s1][s2] || s1 > 900 || s2 > 8100) {
            std::cout << "No solution" << std::endl;
        }
        else {
            std::vector<int> ans;

            while(s1 != 0 && s2 != 0) {
                int d = temp[s1][s2];
                ans.push_back(d);
                s1 -= d; s2 -= d * d;
            }
            std::sort(ans.begin(), ans.end());

            if(ans.size() > 100) 
                std::cout << "No solution" << std::endl;
            else {
                for(auto d: ans) std::cout << d; std::cout << '\n';
            }
        }
    }
}