#include <iostream>
#include <iomanip>
using namespace std;

static void _12_2()
{
	int size, count, ** A, row{}, i, j, positiveElementFound = 0;
	cout << "Введите размерность матрицы: ";
	cin >> size;
	A = new int*[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << "Введите элемент матрицы: ";
			cin >> A[i][j];
		}
	}

	cout << "Матрица: " << endl;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (A[i][j] > 0)
			{
				positiveElementFound = 1;
				row = i;
				break;
			}
		}
		if (positiveElementFound)
		{
			break;
		}
	}

	row -= 1;

	for (j = 0; j < size; j++)
	{
		A[row][j] = -A[row][j];
	}

	cout << "Измененная матрица: " << endl;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	for (int k = 0; k < size; k++) {
		delete[] A[k];
	}
	delete[] A;

}