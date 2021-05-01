#pragma once

#include "CPair.h"

class CRect : public CPair
{
public: 

    CRect() : CPair() { } // constructor 
    CRect(int f_data, int s_data) : CPair(f_data, s_data) { } // constructor with params

    void Calculate() override;
    void Show() override;
};