#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int A;
    char tmp[33];
    cout << "Введите число A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном коде: " << tmp << endl;
    if ((A & 1) == 0) {
        cout << A << " кратно 2." << endl;
    }
    else {
        cout << A << " не кратно 2." << endl;
    }
    _getch();
}