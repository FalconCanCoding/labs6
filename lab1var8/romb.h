#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

/* Клас "Ромб" наследуется от класса "Фигура"
 *
 * P.S. Наследование означает то, что класс-потомок("Ромб") берет в себя
 * все, что есть в класса-предке("Фигура") и добавляет что-то ещё(то, что
 * есть внутри этого класса)
 */

class Romb : public Figure
{
    double a;
public:
    Romb();
    Romb(double _a); // Конструктор с параметрами

    ~Romb();

    double  GetPerimetr();
    void    PrintName();
};

#endif // CIRCLE_H
