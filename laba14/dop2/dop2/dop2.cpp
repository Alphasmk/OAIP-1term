#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int n = 8;
	int sq[n][n], a, i, j;
	for (i = 0; i < n; i++)
	{
		a = i + 1;
		for (j = 0; j < n; j++)
		{
			sq[i][j] = a;
			a++;
			if (a > n) {
				a = 1;
			}
		}
	}

	cout << "Латинский квадрат: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << sq[i][j] << ' ';
		}
		cout << endl << endl;
	}
	_getch();
}