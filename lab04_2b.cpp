#include <iostream>
#include <cmath>
using namespace std;

double calc_distant (double x1,double x2, double y1, double y2);

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
    cout << endl;

    cout << "dist_1 = " << calc_distant (x1, 0, y1, 0) << endl;
    cout << "dist_2 = " << calc_distant (x2, 0, y2, 0);
}

double calc_distant (double x1,double x2, double y1, double y2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
}