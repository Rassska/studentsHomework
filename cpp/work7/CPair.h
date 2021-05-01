#pragma once

class CPair // Abstract base class
{
protected:
    int _f_data;
    int _s_data;

public:
    CPair() // constructor
    {
        _f_data = 0;
        _s_data = 0;
    }
    CPair(int f_data, int s_data) : _f_data(f_data), _s_data(s_data) { } // constructor with params

    virtual void Calculate() = 0;
    virtual void Show() = 0;

    virtual  ~CPair() { };
};