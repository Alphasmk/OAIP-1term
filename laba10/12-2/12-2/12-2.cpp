#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int k, i, j, count = 0, T[100];
    bool Unique;
    cout << "Введите количество символов в массиве: "; cin >> k;

    srand(time(NULL));
    for (i = 0; i < k; i++)
    {
        T[i] = rand() % 100;
    }

    for (i = 0; i < k; i++) {
        Unique = true;
        for (j = 0; j < i; j++) {
            if (T[i] == T[j]) {
                Unique = false;
                break;
            }
        }

        if (Unique) {
            count++;
        }
    }

    for (i = 0; i < k; i++)
    {
        cout << T[i] << " ";
    }

    cout << "Количество различных элементов в массиве: " << count << endl;
    _getch();
}