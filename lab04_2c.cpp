#include <iostream>
#include <cmath>
using namespace std;

double calc_distant (double x1,double x2, double y1, double y2);
double calc_square (double side_1, double side_2, double side_3);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double x1, x2, y1, y2, x3, y3;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;

    double side_1 = calc_distant (x1,x2,y1,y2);
    double side_2 = calc_distant (x2,x3,y2,y3);
    double side_3 = calc_distant (x3,x1,y3,y1);

    cout << "S = " << calc_square (side_1, side_2, side_3);
    return 0;
}

double calc_distant (double x1,double x2, double y1, double y2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
}

double calc_square (double side_1, double side_2, double side_3)
{ 
    double half_perimeter = (side_1 + side_2 + side_3) / 2.0;
    return sqrt (half_perimeter * (half_perimeter - side_1) * (half_perimeter - side_2) * (half_perimeter - side_3));
}
