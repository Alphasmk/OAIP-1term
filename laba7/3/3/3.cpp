#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double x, y, z;
	int i;
	cout << "Введите C1 И C2: "<< endl; cin >> x >> y;
	for (i = 1; i < 13; i++)
	{
		y = y + 0.5 * x;
		x = 0.5 * x;
		x = x + 0.5 * y;
		y = 0.5 * y;
	}
	cout << x << " " << y;
	_getch();
}