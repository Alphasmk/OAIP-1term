#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int n = 2;
	int A[2*n][2*n], B[n][n], C[2*n][2*n], i, j, buf;
	cout << "Исходная матрица: " << endl;
	for (i = 0; i < 2*n; i++)
	{
		for (j = 0; j < 2*n; j++)
		{
			A[i][j] = rand() % 21 - 10;
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			buf = A[i][j];
			A[i][j] = A[i + n][j + n];
			A[i + n][j + n] = buf;
			buf = A[i][j + n];
			A[i][j + n] = A[i + n][j];
			A[i + n][j] = buf;
		}
	}

	cout << endl << "Матрица после алгоритма: " << endl;
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}
	_getch();
}