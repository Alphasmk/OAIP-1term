#include <iostream>
using namespace std;

static void _12_1()
{
	int* ptr, i, n, max, count = 0;
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	if (!(ptr = (int*)malloc(n * sizeof(int))))
	{
		cout << "Нет места";
		return;
	}

	cout << "Массив: " << endl;

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = rand() % 5;
		cout << *(ptr + i) << " ";
	}

	cout << endl;

	max = *(ptr);

	for (i = 0; i < n; i++)
	{
		if (*(ptr + i) > max)
		{
			max = *(ptr + i);
		}
	}

	for (i = 0; i < n; i++)
	{
		if (*(ptr + i) == max)
		{
			count++;
		}
	}
	cout << "Максимальное число: " << max << endl;
	cout << "Встречается " << count << " раз" << endl;
}