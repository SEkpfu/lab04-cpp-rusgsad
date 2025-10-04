#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double func (double);

int main ()
{
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "result: " << 12.5 + func(2) - func(4) * func(10) + func(a) - func(b) + func(a*b);
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
