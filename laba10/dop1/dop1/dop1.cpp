#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double T[50];
	int i, n, count = 0;
	cout << "Введите размерность массива: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> T[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		if (T[i] == T[i + 1])
		{
			count++;
		}
	}
	cout << count;
	_getch();
}
//Вариант 2