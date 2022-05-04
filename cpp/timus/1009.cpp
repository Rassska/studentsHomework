#include <iostream>


std::size_t getAns(std::size_t n, std::size_t k){

	if (n == 0) return 1;
    else if (n == 1)return k - 1;
	else return (k - 1) * getAns(n - 1, k) + (k - 1) * getAns(n - 2, k);
}
int main(){
	std::size_t n, k;
	std::cin >> n >> k;
	std::cout << getAns(n, k) << '\n';
	
}