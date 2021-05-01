#include "CComplex.h"
#include <iostream>

void CComplex::Calculate()
{
    std::cout << (_f_data * _s_data) << std::endl;
}

void CComplex::Show()
{
    std::cout << "Imaginary coefficient: " << _f_data << std::endl;
    std::cout << "Real coefficient:  " << _s_data << std::endl;
}