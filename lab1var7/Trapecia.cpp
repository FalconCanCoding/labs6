#include "Trapecia.h"

#include <iostream>
#include <math.h>

Trapecia::Trapecia()
{
    a = 0;
    b = 0;
    c = 0;
    d = 0;
}

Trapecia::Trapecia(double _a, double _b, double _c, double _d)
{
    a = _a;
    b = _b;
    c = _c;
    d = _d;
}

Trapecia::~Trapecia()
{}

double Trapecia::GetPerimetr()
{
    return a+b+c+d;
}

void Trapecia::PrintName()
{
    std::cout << "Trapecia!" << std::endl;
}
