#include <iostream>
using namespace std;

void square();

int main()
{
    square();
    return 0;
}

void square ()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "* * * *" << endl;
    }
}