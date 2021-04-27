#include <iostream>
#include <exception>
#include "myException.h"

myException::myException(std::string msg, int inputNumberState) :
    m_msg(msg), m_inputNumberState(inputNumberState) {}


myException::~myException() = default;


std::string myException::getMsg() const{
    return this->m_msg;
}

int myException::getInputNumberState() const {
    return this->m_inputNumberState;
}
