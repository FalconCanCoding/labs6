#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure
{
    double a;
    double b;
public:
    Rectangle(double = 0.0, double = 0.0);
    ~Rectangle();

    double  GetPerimetr();
    void    PrintName();
};

#endif // RECTANGLE_H
