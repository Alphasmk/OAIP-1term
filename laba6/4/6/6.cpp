#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int a, i, b = 0;
	cout << "Введите число: "; cin >> a;
	for (i = 0; i < 1000; i++)
	{
		b = pow(2, i);
		if (i + 1 == a)
		{
			break;
		}
	}
	cout << b;
	_getch();
}