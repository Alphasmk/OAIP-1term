#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int arr[15], k, i;

	cout << "Введите k: "; cin >> k;

	for (i = 0; i < 15; i++)
	{
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	
	cout << endl << "Индексы элементов, которые равны k: ";

	for (i = 0; i < 15; i++)
	{
		if (*(arr + i) == k)
		{
			cout << i << " ";
		}
	}

	cout << endl << "Индексы элементов, которые больше k: ";

	for (i = 0; i < 15; i++)
	{
		if (*(arr + i) > k)
		{
			cout << i << " ";
		}
	}

	cout << endl << "Индексы элементов, которые меньше k: ";

	for (i = 0; i < 15; i++)
	{
		if (*(arr + i) < k)
		{
			cout << i << " ";
		}
	}
	_getch();
}