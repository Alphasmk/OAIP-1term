#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int a;
    cout << "Введите двузначное число: ";
    cin >> a;

    int b = a / 10;
    int c = a % 10;

    switch (b) {
    case 1:
    case 9:
        cout << "Есть 1 или 9" << endl;
        break;
    default:
        switch (c) {
        case 1:
        case 9:
            cout << "Есть 1 или 9" << endl;
            break;
        default:
            cout << "Нет 1 или 9" << endl;
            break;
        }
    }

}
