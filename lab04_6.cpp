#include <iostream>
using namespace std;

string sign_output (int);
string num_output (int);

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double a;
    cout << "a ~ [-10; 10] !!!\n";
    cout << "a =  ";
    cin >> a;

    if (a < -10 || a > 10)
    {
        cout << "ERROR";
        return 1;
    }
    int positive_a = abs (a);
    cout << sign_output (a) << num_output (positive_a);
}

string sign_output (int x)
{
    if (x < 0)
    {
        return "-";
    }
    else 
    {
        if (x == 0)
        {
            return "";
        }
        else
        {
            return "+";
        }
    }
}

string num_output (int x)
{
    switch (x)
    {
        case 0: return "ноль"; break;
        case 1: return "один"; break;
        case 2: return "два"; break;
        case 3: return "три"; break;
        case 4: return "четыре"; break;
        case 5: return "пять"; break;
        case 6: return "шесть"; break;
        case 7: return "семь"; break;
        case 8: return "восемь"; break;
        case 9: return "девять"; break;
        case 10: return "десять"; break;
        default: return "error";
    }
}