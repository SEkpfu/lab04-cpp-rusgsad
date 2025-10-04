#include <iostream>
#include <cmath>
using namespace std;

void calc (double a, double b, double c, double *x1, double *x2);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double x1, x2;
    calc (a, b, c, &x1, &x2);

    cout << "\n=== РЕЗУЛЬАТ ===\n";
    if (a == 0)
    {
        cout << "\nУравнение не квадратное!\n";
    }
    else 
    {
        if (b == 0)
        {
            cout << "x = " << x1; // ур-е имеет только один корень
        }
        else 
        {
            if (c == 0)
            {
                // при c == 0 одним из решений ур-я будет x = 0
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2;
            }
            else
            {
                if (x1 == 0 && x2 == 0)
                {
                    cout << "Действительных корней не существует!"; // условие d < 0
                }
                if (x1 != 0 && x2 == 0)
                {
                    cout << "x = " << x1; // для формулы квадрата разности/суммы (случай 3)
                }
                if (x1 != 0 && x2 != 0)
                {    
                    // d > 0, 2 корня
                    cout << "x1 = " << x1 << endl;
                    cout << "x2 = " << x2;
                }
            }
        }
    }
    return 0;
}

void calc (double a, double b, double c, double *x1, double *x2)
{
    double d = b * b - 4.0 * a * c;
    if (d > 0)
    {
        *x1 = (-b + sqrt(d)) / (2.0 * a);
        *x2 = (-b - sqrt(d)) / (2.0 * a);
    }
    if (d == 0)
    {
        *x1 = -b / 2.0 * a;
        *x2 = 0;
    }
    if (d < 0)
    {
        *x1 = 0;
        *x2 = 0;
    }
}