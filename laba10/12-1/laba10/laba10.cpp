#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int Size = 50;
	int T[Size], n, i, min;
	cout << "Введите размерность массива: "; cin >> n;;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		T[i] = rand() % 100;
	}
	
	min = T[0];
	for (i = 0; i < n; i++)
	{
		if (T[i] < min)
		{
			min = T[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			T[i] = min;
		}
	}

	cout << "Массив после замены: ";
	for (i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
	_getch();
}