#pragma once
#include <iostream>

class Person
{
private:
    std::size_t m_id;
    std::string m_name;
    bool m_sex;
    double m_age;

public:
    Person(std::size_t id, std::string name, bool sex, double age);
    Person();
    ~Person();
    void print() const;
    void input();

};

