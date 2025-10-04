#include <iostream>
using namespace std;

void square(int, int);

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    cout << "Шахматная доска (n x n) с отступами (m x m)" << endl;
    square(n, m);
    return 0;
}

void square (int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
            cout << "o ";
            for (int k = 0; k < m; k++)
            {
                cout << " ";
            }
            }
            else 
            {
            cout << "* ";
            for (int k = 0; k < m; k++)
            {
                cout << " ";
            }
            }
        }
        for (int k = 0; k < m; k++)
        {
            cout << endl;
        }
    }
}