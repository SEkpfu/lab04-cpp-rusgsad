#include <iostream>
using namespace std;

double calc_tF (double);
double calc_tK (double);
void calc_ (double tC, double& tF, double& tK);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double tC_1, tC_2;
    cin >> tC_1 >> tC_2;

    // пункт 1
    cout << tC_1 << "\t" << calc_tF (tC_1) << endl;
    cout << tC_2 << "\t" << calc_tF (tC_2) << endl << endl;

    // пункт 2
    cout << tC_1 << "\t" << calc_tK (tC_1) << endl;
    cout << tC_2 << "\t" << calc_tK (tC_2) << endl << endl;

    // пункт 3
    double tF_1, tK_1;
    calc_ (tC_1, tF_1, tK_1);
    cout << tC_1 << "\t" << tF_1 << "\t" << tK_1 << endl;

    double tF_2, tK_2;
    calc_ (tC_2, tF_2, tK_2);
    cout << tC_2 << "\t" << tF_2 << "\t" << tK_2;
    return 0;
}

double calc_tF (double tC)
{
    return 9.0 / 5.0 * tC + 32.0;
}

double calc_tK (double tC)
{
    return tC + 273.0;
}

void calc_ (double tC, double& tF, double& tK)
{
    tF = 9.0 / 5.0 * tC + 32.0;
    tK = tC + 273.0;
}