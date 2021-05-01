#include "CPair.h"
#include "CRect.h"
#include "CComplex.h"
#include <iostream>

int main()
{
    CPair* cp = nullptr;  
    CRect cr(2, 3);
    CComplex cc(3, 4);

    std::cout << "At the first iteration, choose only the 3rd or 4th item" << std::endl;
    while(true)
    {
        int number_for_choose;

        std::cout << "1 - Show status of object"                                       << std::endl;
        std::cout << "2 - Calculate data"                                              << std::endl;
        std::cout << "3 - Change the pointer to the base class on the CRect object"    << std::endl;
        std::cout << "4 - Change the pointer to the base class on the CComplex object" << std::endl;
        std::cout << "0 - exit"                                                        << std::endl;

        std::cin >> number_for_choose;

        switch (number_for_choose)
        {
            case 1:
            {
                cp->Show();
                break;
            }
            case 2:
            {
                cp->Calculate();
                break;
            }
            case 3:
            {
                cp = &cr;
                break;
            }
            case 4:
            {
                cp = &cc;
                break;
            }
            default:
            {
                return 0;
            }
        }
    }
    return 0;
}