#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int x, y, z, k = 1;
    cout << "Введите три натуральных числа: ";
    cin >> x >> y >> z;
    for (int i = 2; i <= x && i <= y && i <= z; i++)
    {
        if (x % i == 0 && y % i == 0 && z % i == 0)
        {
            k = i;
        }
    }
    cout << "Наибольший общий делитель чисел: " << k << endl;
    _getch();
}