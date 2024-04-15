#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int T[100], pos[100], i, n, t, k, j, p, a, sum1 = 0, sum2 = 0;
    cout << "Введите длину массива: "; cin >> n;
    cout << "Введите длину последовательности: "; cin >> k;
    t = k;
    for (i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " элемент: ";
        cin >> T[i];
        if (T[i] > 100 || T[i] < -100)
        {
            return;
        }
        continue;
    }

    for (i = 0; i < k; i++)
    {
        sum1 = sum1 + T[i];
        pos[i] = T[i];
    }

    for (i = 1; i < n; i++)
    {
        for (j = i; j <= k; j++)
        {
            if (T[j] < 0)
            {
                break;
            }
            sum2 = sum2 + T[j];
            if (sum2 > sum1)
            {
                sum1 = sum2;
                for (p = 0; p < t; p++)
                {
                    pos[p] = T[j - (t - p) + 1];
                }
            }
        }

        k++;
        sum2 = 0;
    }
    cout << sum1 << endl;
    for (i = 0; i < t; i++)
    {
        cout << pos[i] << " ";
    }
    _getch();
}
//Вариант 6