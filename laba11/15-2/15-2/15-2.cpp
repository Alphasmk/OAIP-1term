#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int A, p, n;
    char tmp[33];
    cout << "Введите число A: ";
    cin >> A;

    cout << "Введите позицию p: ";
    cin >> p;

    cout << "Введите количество битов n: ";
    cin >> n;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;

    int mask = ~((1 << n) - 1) << p;
    A = A & mask;

    _itoa_s(A, tmp, 2);
    cout << "Результат: " << tmp << endl;

    _getch();
}