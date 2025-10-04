#include <iostream>
using namespace std;

bool lucky_ticket (int num);
bool lucky_ticket (int num [6]);
bool lucky_ticket (int num_half1, int num_half2);

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int num_total;
    cout << "введите шестизначное число:\n";
    cin >> num_total;

    if (num_total < 100000 || num_total > 999999)
    {
        cout << "число не шестизначное!";
        return 1;
    }

    cout << "введите шестизначное число отдельными цифрами (от 1 до 9):\n";
    int num_digit [6];
    for (int i = 0; i < 6; i++)
    {
        cin >> num_digit [i];
        if (num_digit[i] < 0 || num_digit[i] > 9)
        {
            cout << "error!";
            return 1;
        }
    }

    cout << "введите шестизначное число двумя целыми числами:\n";
    int num_half1, num_half2;
    cout << "первые три цифры: ";
    cin >> num_half1;
    cout << "последние три цифры: ";
    cin >> num_half2;
    if (num_half1 < 100 || num_half1 > 999 || num_half2 < 100 || num_half2 > 999)
    {
        cout << "error!";
        return 1; 
    }

    cout << "Проверка счастливых билетов:\n";
    cout << "===============================\n";
    cout << "Билет №1 (целое число): " << (lucky_ticket (num_total) ? "СЧАСТЛИВЫЙ" : "НЕСЧАСТЛИВЫЙ") << endl;
    cout << "\nБилет №2 (шесть цифр): " << (lucky_ticket (num_digit[6]) ? "СЧАСТЛИВЫЙ" : "НЕСЧАСТЛИВЫЙ") << endl;
    cout << "\nБилет №3 (два числа): " << (lucky_ticket (num_half1, num_half2) ? "СЧАСТЛИВЫЙ" : "НЕСЧАСТЛИВЫЙ");
}

// пункт а)
bool lucky_ticket (int num)
{
    int digit1 = num / 100000;
    int digit2 = num / 10000 % 10;
    int digit3 = num / 1000 % 10;
    int digit4 = num / 100 % 10;
    int digit5 = num / 10 % 10;
    int digit6 = num % 10;
    
    return ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6));
}

// пункт b)
bool lucky_ticket (int num [6])
{
    return ((num[0] + num[1] + num[2]) == (num[3]) + num[4] + num[5]);
}

// пункт c)
bool lucky_ticket (int num_half1, int num_half2)
{
    int digit1 = num_half1 / 100;
    int digit2 = num_half1 / 10 % 10;
    int digit3 = num_half1 % 10;
    int digit4 = num_half2 / 100;
    int digit5 = num_half2 / 10 % 10;
    int digit6 = num_half2 % 10;
    return ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6));
}


