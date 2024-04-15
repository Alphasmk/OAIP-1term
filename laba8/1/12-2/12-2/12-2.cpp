#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double t = 0.45, x, q;
	int i = 1;
	while (i <= 6) {
		cout << "Введите x: "; cin >> x;
		t = t + ((x + 1) / x);
		i++;
	}
	q = t;
	cout << "q = " << q;
	_getch();
}