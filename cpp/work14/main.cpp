#include <iostream>
#include <cmath>

int fact(int n){
    return std::tgamma(n + 1);
}

int main() {
				int m, ans = 0;
				std::cin >> m;
				
				for (int i = 1; i <= m; i++) {
								if (i % 2 == 0) {
												ans -= std::tgamma(i + 1); 
								} else {
												ans += std::tgamma(i + 1);
								}
				}
				std::cout << ans;
}
