#include <iostream>
#include <vector>
#include <algorithm>
const int asciTableCodes = 333;
int main() {

    std::vector<bool> hashTable(asciTableCodes, false);

    std::string givenString;
    std::cin >> givenString;

    for (std::size_t i = 0; i < givenString.size(); i++) {
        hashTable[givenString[i]] = true;
    }

    for (std::size_t i = 0; i < asciTableCodes; i++) {
        if (hashTable[i] == true) {
            std::cout << givenString[i] << ' ';
            hashTable[givenString[i]] = false;
        }
    }


    



}