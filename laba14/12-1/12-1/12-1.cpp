#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int n = 3, m = 4;
	int i, j, A[n][m], sum = 0, mult = 1;
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (abs(A[i][j]) < i)
			{
				if (A[i][j] < 0 && A[i][j] % 2 != 0)
				{
					sum += A[i][j];
					mult *= A[i][j];
				}
			}
		}
	}

	cout << "Готовая матрица:" <<endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << setw(2) << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << mult;

	_getch();
}