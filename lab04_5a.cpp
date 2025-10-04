#include <iostream>
using namespace std;

double calc_factorial (int);

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int n, m;
    cout << "N = ";
    cin >> n;
    cout << "M = ";
    cin >> m;

    cout << calc_factorial(n) * calc_factorial(m) / calc_factorial(n+m);
}

double calc_factorial (int x)
{
    double factorial = 1;
    for (int i = 2; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}