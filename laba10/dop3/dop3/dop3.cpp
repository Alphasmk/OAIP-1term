#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int T[100], P[100], i, n, k = 0, count = 1, max;
	cout << "Введите размерность массива: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент: "; 
		cin >> T[i];
	}

	for (i = 0; i < n; i++)
	{
		if (T[i] == T[i + 1])
		{
			count++;
		}
		
		if (T[i] != T[i + 1])
		{
			P[k] = count;
			k++;
			count = 1;
		}
	}

	max = P[0];

	for (i = 1; i < k; i++)
	{
		if (max < P[i])
		{

			max = P[i];
		}
	}

	cout << max;
	_getch();
}

//Вариант 3