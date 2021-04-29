#include <iostream>
#include <string>
#include <stdlib.h>
#include "person.h"




int main() {

    Person example(121, "Andrey", 0, 20);
    example.print();

    Person* example2 = new Person();
    example2->print();
    delete example2;

    Person example3;
    example3.input();
    example3.print();
}