#include "romb.h"

#include <iostream>
#include <math.h>

Romb::Romb()
{
    a = 0;
}

Romb::Romb(double _a)
{
    a = _a;
}

Romb::~Romb()
{}

double Romb::GetPerimetr()
{
    return 4*a;
}

void Romb::PrintName()
{
    std::cout << "Romb!" << std::endl;
}
