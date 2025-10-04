#include <iostream>
#include <cmath>
using namespace std;

double s(int a, int h);
double s(int a, int b, int c);
double s(double a, double b, double c);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double a, b, c;
    int u, h;

    cin >> a >> b >> c;
    cin >> h >> u;

    cout << "Площадь через высоту и сторону равна " << s(int(a), int(h)) << endl;
    cout << "Площадь через две стороны и угол " << s(int(a), int(b), int(u)) << endl;
    cout << "Площадь через три стороны " << s(a, b, c) << endl;
}

double s (int a, int h) 
{
    return a * h * 0.5;
}

double s (int a, int b, int c) 
{
    return a * b * sin(c * M_PI / 180.0) * 0.5;
}

double s (double a, double b, double c) 
{
    double p;
    p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}