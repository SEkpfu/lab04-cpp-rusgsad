#include <iostream>
using namespace std;

double arithmetic_mean (double, double);
double arithmetic_mean (double, double, double);
double arithmetic_mean (double, double, double, double);


int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    cout << "=== Введите четыре вещественных аргумента ===";
    double num[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> num[i];
    }
    cout << "Ср. арифм. для двух вещ. арг.: " << arithmetic_mean (num[1], num[2]) << endl;
    cout << "Ср. арифм. для трех вещ. арг.: " << arithmetic_mean (num[1], num[2], num[3]) << endl;
    cout << "Ср. арифм. для четырех вещ. арг.: " << arithmetic_mean (num[1], num[2], num[3], num[4]);
}

double arithmetic_mean (double a, double b)
{
    return (a + b) / 2.0;
}

double arithmetic_mean (double a, double b, double c)
{
    return (a + b + c) / 3.0;
}

double arithmetic_mean (double a, double b, double c, double d)
{
    return (a + b + c + d) / 4.0;
}