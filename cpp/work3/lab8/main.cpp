#include <iostream>
#include "myException.h"
#include <stdexcept>
#include <cmath>

double getLnOfInteger(int givenNumber) {
    if (givenNumber < 0) {
        throw myException(std::string("Given number is less than 0!"), givenNumber);
    } else if (givenNumber == 0) {
        throw std::invalid_argument(std::string("Given number is equal to 0!"));
    } else {
        return log(givenNumber);
    }
}

int main() {

    int number;
    std::cin >> number;

    try
    {
        getLnOfInteger(number);
        std::cout << "Here is ln(" << number << "): " << getLnOfInteger(number) << '\n';
    }
    catch(const myException& exp)
    {
        std::cout << exp.what() << ": " << exp.getMsg() << '\n';
    }
    catch(const std::invalid_argument& exp) 
    {
        std::cout << exp.what() << '\n';
    }

}