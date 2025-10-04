#include <iostream>
using namespace std;

double func (int, int);

int main()
{
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    cout << "x^n = " << func (x, n);
}

double func (int x, int n)
{
    double result = x;
    for (int i = 1; i < n; i++)
    {
        result *= x;
    }
    return result;
}