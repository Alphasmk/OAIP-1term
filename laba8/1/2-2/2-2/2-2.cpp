#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double t, q, y, ymul = 1;
	int i;
	cout << "Введите y1: "; cin >> y;
	t = y;
	ymul = ymul * pow(y, 2);
	for (i = 2; i <= 5; i++)
	{
		cout << "Введите y" << i << ": "; cin >> y;
		if (t > y)
		{
			t = y;
		}
		ymul = ymul * pow(y, 2);
	}
	q = y * ymul;
	cout << "q = " << q << endl;
	cout << "t = " << t;
	_getch();
}