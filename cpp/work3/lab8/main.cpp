#include <iostream>
#include <stdexcept>
#include <cmath>
#include <exception>

class myException : public std::exception {
private:
    std::string m_msg;
    int m_inputNumberState;

public:

    myException(std::string msg, int inputNumberState):
        m_msg(msg), m_inputNumberState(inputNumberState) {}

    std::string getMsg() const{
        return this->m_msg;
    }

    int getInputNumberState() const {
        return this->m_inputNumberState;
    }

    ~myException() = default;
};

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

    std::cout << "Input your log argument!\n";
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