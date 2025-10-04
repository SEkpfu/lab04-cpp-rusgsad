#include <iostream>
#include <cmath>
using namespace std;

double calc_distant (double x1,double x2, double y1, double y2);
double calc_half_square (double side1, double side2, double side3);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double x1, x2, y1, y2, x3, y3, x4, y4;
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
    cout << "x4 = ";
    cin >> x4;
    cout << "y4 = ";
    cin >> y4;

    double side_1 = calc_distant (x1,x2,y1,y2);
    double side_2 = calc_distant (x2,x3,y2,y3);
    double side_3 = calc_distant (x3,x4,y3,y4);
    double side_4 = calc_distant (x4, x1, y4, y1);
    double side_devider = calc_distant (x1, x3, y1, y3); // сторона, делящая четырехугольник на два треугольника

    cout << "S = " << calc_half_square (side_1, side_2, side_devider) + calc_half_square (side_3, side_4, side_devider);
    return 0;
}

double calc_distant (double x1,double x2, double y1, double y2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
}

double calc_half_square (double side1, double side2, double side3)
{
    double half_perimeter = (side1 + side2 + side3) / 2.0;
    return sqrt (half_perimeter * (half_perimeter - side1) * (half_perimeter - side2) * (half_perimeter - side3));
}
