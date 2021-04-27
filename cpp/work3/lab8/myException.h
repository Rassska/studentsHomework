#pragma once
#include <iostream>
#include <exception>
#include <string>

class myException : public std::exception {
private:
    std::string m_msg;
    int m_inputNumberState;

public:

    myException(std::string msg, int inputNumberState);
    int getInputNumberState() const;
    std::string getMsg() const;

    ~myException();
};

