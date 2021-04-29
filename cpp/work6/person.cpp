#include <iostream>
#include "person.h"


Person::Person() = default;

Person::Person(std::size_t id, std::string name, bool sex, double age) :
    m_id(id), m_name(name), m_age(age), m_sex(sex){}


void Person::print() const{
    std::cout << "Person Id: " << m_id << '\n';
    std::cout << "Name: " << m_name << '\n';
    std::cout << "Age: " << m_age << '\n';
    std::cout << "Sex: " << m_sex << '\n';
}
void Person::input(){
    std::cout << "Input the id of person!\n";
    std::cin >> m_id;
    std::cout << "Input the name of person!\n";
    std::cin >> m_name;
    std::cout << "Input the age of person!\n";
    std::cin >> m_age;
    std::cout << "Input the sex of person!\n";
    std::cin >> m_sex;

}
Person::~Person() = default;
