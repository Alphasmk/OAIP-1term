#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int A[100], B[100], n, m, i, min, max;
	bool found = false;
	cout << "Введите n: "; cin >> n;
	cout << "Введите m: "; cin >> m;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 99;
	}
	
	for (i = 0; i < m; i++)
	{
		B[i] = rand() % 99;
	}

	max = A[0];

	for (i = 1; i < n; i++)
	{
		if (*(A + i) > max)
		{
			max = *(A + i);
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	for (i = 0; i < m; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;

	int* pmax;
	pmax = &max;

	for (i = 0; i < m; i++)
	{
		if ((B + i) == pmax)
		{
			cout << "Содержится" << endl;
			found = true;
		}
	}

	if (!found)
	{
		cout << "Не содержится";
	}
	_getch();
}