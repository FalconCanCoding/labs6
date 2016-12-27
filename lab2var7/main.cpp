#include "stack.h"

#include <iostream>

int main()
{
    Stack s;
    s.push(5);
    s.push(3);
    s.push(2);

    s.print_multiplication();

    s.pop();

    s.print_multiplication();

    std::cout << s.top() << std::endl;

    return 0;
}
