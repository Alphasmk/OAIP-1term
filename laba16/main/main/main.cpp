#include <iostream>
#include <iomanip>
using namespace std;
void replacemin(int** matrix, int row, int column);
void findeq(int** matrix, int size);
int main()
{
	setlocale(LC_CTYPE, "rus");
	int i, j, k = 1;
	char choice;
	do
	{
		cout << "Введите номер задания: " << endl;
		cout << "1 - 1 задание " << endl;
		cout << "2 - 2 задание " << endl;
		cout << "3 - выход " << endl;
		cin >> choice;
		switch (choice)
		{
		case '1':
			int d, p, ** A;
			while (k > 0)
			{
				cout << "Введите d: ";
				cin >> d;
				cout << "Введите p: ";
				cin >> p;
				if (d <= 16 && p <= 18)
				{
					break;
				}
			}
			A = new int* [d];
			for (i = 0; i < d; i++)
			{
				A[i] = new int[p];
			}

			cout << "Матрица: " << endl;

			for (i = 0; i < d; i++)
			{
				for (j = 0; j < p; j++)
				{
					A[i][j] = rand() % 99;
					cout << setw(3) << A[i][j] << " ";
				}
				cout << endl;
			}
			
			replacemin(A, d, p);

			for (i = 0; i < d; i++)
			{
				delete A[i];
			}

			delete[] A;
			break;
		case '2':
			const int size = 4;
			int** B;
			B = new int* [size];
			for (i = 0; i < size; i++)
			{
				B[i] = new int[size];
			}

			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					cout << "Введите элемент матрицы: ";
					cin >> B[i][j];
				}
			}

			cout << "Матрица: " << endl << endl;
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					cout << B[i][j] << " ";
				}
				cout << endl;
			}

			findeq(B, size);

			for (i = 0; i < size; i++)
			{
				delete[] B[i];
			}
			delete[] B;
		}
	} while (choice != '3');
}

void replacemin(int **matrix, int row, int column)
{
	int min, i, j;
	for (i = 0; i < row; i++)
	{
		min = matrix[i][0];
		for (j = 1; j < column; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
		matrix[i][i] = min;
	}

	cout << "Измененная матрица: " << endl;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void findeq(int** matrix, int size)
{
	cout << "Совпадающие строки и столбцы:" << endl;
	for (int i = 0; i < size; i++)
	{
		bool isMatching = true;
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				isMatching = false;
				break;
			}
		}
		if (isMatching)
		{
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}
