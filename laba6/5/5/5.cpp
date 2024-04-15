#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int a, b, count = 0;
	cout << "Введите a и b: "; cin >> a >> b;
	while (a * b != 0)
	{
		if (a * b < 0)
		{
			count++;
		}
		a = b;
		cout << "Введите новое значение: "; cin >> b;
	}
	cout << count;
	_getch();
}