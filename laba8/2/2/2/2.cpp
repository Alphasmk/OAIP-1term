#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int a, b, n, i, count = 0;
	cout << "Введите кол-во членов последовательности: "; cin >> n;
	for(i = 1; i <= n; i++)
	{
		cout << "Введите " << i << " член последовательности: "; cin >> a;
		count++;
		if (a < 0)
		{
			b = count;
		}
	}
	cout << "Порядковый номер последнего отрицательного элемента: " << b;
	_getch();
}