#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	float p, q, k = 1.03;
	int days = 0;
	cout << "Введите значение прибыли в первый день: "; cin >> p;
	cout << "Введите значение Q: "; cin >> q;
	while (p <= q)
	{
		p = p * k;
		days++;
	}
	cout << "Выручка в день, превыщающая Q: " << p << endl;
	cout << "Количество дней, необходимое для этого: " << days;
	_getch();
}