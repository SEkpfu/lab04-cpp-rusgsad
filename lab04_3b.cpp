#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double func (double);

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double x[6], y[6];
    int negative, max_y;

    cout << "=== Введите 7 элементов массива 'x' ===\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "x (" << i + 1 << ") = ";
        cin >> x[i];
    }
    
    cout << "=== РЕЗУЛЬТАТЫ ===\n";
    for (int i = 0; i < 7; i++)
    {
        double y = func(x[i]);
        cout << "y (" << i + 1 << ") = " << y << endl;
        if (y < 0)
        {
        negative++;
        }
        if (y > max_y)
        {
            max_y = y;
        }
    }
    cout << "\nКоличество отрицательных элементов массива 'y': " << negative << endl;
    cout << "Максимальный элемент: " << max_y;

    return  0;
}

double func (double x)
{
    if (x < 0)
    {
        return 2.0 + 1.0 / 3.0;
    }
    else 
    {
        if (x < 2.0 * M_PI)
        {
            return x * x - 3.0;
        }
        else 
        {
            return (1.0 + x * x * x) / (2.0 * x);
        }
    }
}