#pragma once

#include "CPair.h"

class CComplex : public CPair
{
public:
    CComplex() : CPair() { } // constructor
    CComplex(int f_data, int s_data) : CPair(f_data, s_data) { } // constructor with params

    void Calculate() override;
    void Show() override;
};