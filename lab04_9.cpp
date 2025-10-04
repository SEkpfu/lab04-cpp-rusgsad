#include <iostream>
using namespace std;

bool func (double x, double& result);

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    double f2, f0, fa, f2a, f6, fab;

    if (func (2, f2) && func (0, f0) && func (a, fa))
    {
        cout << "ИСТИНА\n";
        cout << "f(2) - f(0) * f(a) = " << f2 - f0 * fa << endl;
    }
    else
    {
        cout << "ЛОЖЬ" << endl;
    }

    if (func ((2 * a), f2a) && func (6, f6) && func ((a * b), fab))
    {
        cout << "ИСТИНА\n";
        cout << "f(2a) - f(6) + f(ab) = " << f2a - f6 + fab;
    }
    else 
    {
        cout << "ЛОЖЬ";
    }
}

bool func (double x, double& result)
{
    if (x <= 2)
    {
        if ((1 - x) == 0 || x == 0)
        {
            return false;
        }
        else
        {
            result = (2.0 * x + 1.0 / (1.0 - x)) / 3.0 * x;
        }
    }
    else 
    {
        if (x <= 5)
        {
            result = 10.0 + 2.0 / 7.0;
        }
        else 
        {
            result = -3.0 - x;
        }
    }
    return true;
}