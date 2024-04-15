#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, i, n, sum = 0;
	cout << "Введите кол-во членов последовательности: "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "Введите " << i << " член последовательности: "; cin >> a;
		if (a % 2 == 0)
		{
			sum = sum + a;
		}
	}
	cout << "Сумма четных элементов: " << sum;
	_getch();
}