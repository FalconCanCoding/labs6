#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

/* Клас "Ромб" наследуется от класса "Фигура"
 *
 * P.S. Наследование означает то, что класс-потомок("Ромб") берет в себя
 * все, что есть в класса-предке("Фигура") и добавляет что-то ещё(то, что
 * есть внутри этого класса)
 */

class Trapecia : public Figure
{
    double a; // Стороны трапеции
    double b;
    double c;
    double d;

public:
    Trapecia();
    Trapecia(double _a, double _b, double _c, double _d); // Конструктор с параметрами

    ~Trapecia();

    double  GetPerimetr();
    void    PrintName();

};

#endif // CIRCLE_H
