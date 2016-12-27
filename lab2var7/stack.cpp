#include "stack.h"

#include <iostream>

Stack::Stack()
{}

Stack::Stack(int value)
{
    elements.push_back(value); // Добавляем value в конец списка
}

void Stack::push(int value)
{
    elements.push_back(value); // Тоже, что и в конструкторе
}

int& Stack::top()
{
    return elements.back(); // Возвращем последний элемент из списка
}

void Stack::pop()
{
    elements.pop_back(); // Удаляем последний элемент из списка
}

void Stack::print_multiplication()
{
    if(elements.size() < 3)
    {
        std::cout << "В стеке меньше 3 элементов!" << std::endl;
        return;
    }

    unsigned int i = 0; // Счетчик
    int sum = 1;
    auto it = elements.begin(); // Получаем итератор первого элемента списка

    while(i < 3 && i < elements.size()) // Проходим по всему списку, но не более 3-х элементов
    {
        sum *= *it; // *it = значению элемента списка, на который указывает итератор
        ++it; // Двигаем итератор вперед
        ++i;
    }

    std::cout << "Произведение первых " << i << "-х элементов стека равна " << sum << std::endl;
}
