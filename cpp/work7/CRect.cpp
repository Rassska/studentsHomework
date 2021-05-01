#include "CRect.h"
#include <cmath>
#include <iostream>

void CRect::Calculate()
{
    std::cout << sqrt((_f_data * _f_data) + (_s_data * _s_data)) << std::endl;
}

void CRect::Show()
{
    std::cout << "Weight: " << _f_data << std::endl;
    std::cout << "Height: " << _s_data << std::endl;
}