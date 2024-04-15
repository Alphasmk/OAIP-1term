#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int n = 3, m = 4;
	int A[n][m], i, j, count = 0;
	cout << "Введите элементы матрицы: ";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	cout << "Матрица: " << endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (A[i][j] > 0)
			{
				count++;
				break;
			}
		}
	}

	if (count == n)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				A[i][j] = -A[i][j];
			}
		}
	}

	cout << "Измененная матрица: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}
	_getch();
}