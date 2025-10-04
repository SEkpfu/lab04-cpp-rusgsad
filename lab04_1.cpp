#include <iostream>
using namespace std;

double calc_plus (double a, double b);
double calc_minus (double a, double b);
double calc_multi (double a, double b);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << calc_plus (calc_multi (5, calc_plus (calc_minus (a, 2), b)), calc_multi (1000, a));
    return 0;
}

double calc_plus (double a, double b)
{
    return a + b;
}

double calc_minus (double a, double b)
{
    return a - b;
}

double calc_multi (double a, double b)
{
    return a * b;
}