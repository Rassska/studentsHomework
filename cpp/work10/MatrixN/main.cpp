#include "matrix.hpp"
#include <iostream>
#include <fstream>


int main() {
    std::cout << "Input N: ";
    uint32_t N;
    std::cin >> N;
    Matrix m(N);

    std::cout << "Rows without 0: " << m.CountNotEmptyRows() << '\n';
    m.NotAloneMaxElement(0, std::cout);

    //m[0][0] =100;
    //m[1][1]=100;
    //std::ofstream out("result.txt");
    //out << m;
}