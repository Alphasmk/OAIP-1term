#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int n, i, a, b, count = 0;
	cout << "Введите кол-во членов последовательности: "; cin >> n;
	cout << "Введите первые два члена последовательности: "; cin >> a >> b;
	for (i = 3; i <= n; i++)
	{
		if (a * b < 0)
		{
			count++;
		}
		a = b;
		cout << "Введите " << i << " член последовательности: "; cin >> b;
	}
	cout << "Кол-во смен знака: " << count;
	_getch();
}