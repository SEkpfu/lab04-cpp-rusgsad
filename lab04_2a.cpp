#include <iostream>
#include <cmath>
using namespace std;

double calc_radius (double dx, double dy);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double x1, x2, y1, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    double radius = calc_radius (dx, dy);

    cout << "R = " << radius;
    return 0;
}

double calc_radius (double dx, double dy)
{
    return sqrt (dx*dx + dy*dy);
}