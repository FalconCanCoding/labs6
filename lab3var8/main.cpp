#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

/*
 * 1) Почитать про std::vector
 * 2) Почитать про шейкер-сортировку (на вики)
 */

void print(std::vector<int>& v)
{
    for(unsigned int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

void sort(std::vector<int>& v)
{
    for (int idx_i = 0; idx_i < v.size() - 1; idx_i++)
    {
        int min_idx = idx_i;
        for (int idx_j = idx_i + 1; idx_j < v.size(); idx_j++)
        {
            if (v[idx_j] < v[min_idx])
            {
                min_idx = idx_j;
            }
        }

        if (min_idx != idx_i)
        {
            std::swap(v[idx_i], v[min_idx]);
        }
    }
}

int main() // Без замера времени (нет кросплатформенной библиотеки)
{
    srand( time(NULL) );

    std::vector<int> v; // Создаем пустой вектор

    std::cout << "Введите кол-во элементов массива: ";
    int c = 0;
    std::cin >> c; // Вводим количество элементов вектора с клавиатуры

    for(int i = 0; i < c; i++)
    {
        int x = rand() % c; // генерация случайного числа от 0 до size-1, где size - введенный размер вектора
        v.push_back(x); // Кладем в конец вектора сгенерированное случайное значение
    }

    std::cout << "Исходный массив:" << std::endl;
    print(v);

    sort(v);

    std::cout << "Отсортированный массив: " << std::endl;
    print(v);

    return 0;
}
