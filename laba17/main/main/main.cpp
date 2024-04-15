#include <iostream>
#include <iomanip>
using namespace std;
int findMinus(int* massiv, int size);
int isMinus(int** matrix, int size);

int main()
{
	setlocale(LC_CTYPE, "rus");
	int choice, size, i, j;
	do {
		cout << "Введите вариант выполнения программы: " << endl;
		cout << "1 - 1 задание" << endl;
		cout << "2 - 2 задание" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
	switch (choice)
	{
	case 1:
		int* A;
		cout << "Введите размер массива: ";
		cin >> size;
		A = new int[size];
		for (i = 0; i < size; i++)
		{
			cout << "Введите элемент массива: ";
			cin >> A[i];
		}

		cout << "Массив: " << endl;

		for (i = 0; i < size; i++)
		{
			cout << setw(3) << A[i] << " ";
		}
		cout << endl;
		cout << "Количество отрицательных элементов на четных местах: " << findMinus(A, size) << endl;
		delete[] A;
		break;
	case 2:
		int** B;
		cout << "Введите размер матрицы: ";
		cin >> size;
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

		cout << "Матрица: " << endl;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				cout << setw(3) << B[i][j] << " ";
			}
			cout << endl;
		}

		for (i = 0; i < size; i++)
		{
			B[i][isMinus(B, size)] /= 2;
		}

		cout << endl << "Измененная матрица: " << endl;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				cout << setw(3) << B[i][j] << " ";
			}
			cout << endl;
		}

		for (i = 0; i < size; i++)
		{
			delete[] B[i];
		}
		delete[] B;
	}
	} while (choice != 3);
}

int findMinus(int* massiv, int size)
{
	int i, count = 0;
	for (i = 0; i < size; i++)
	{
		if (massiv[i] < 0 && (i + 1) % 2 == 0)
		{
			count++;
		}
	}
	return count;
}

int isMinus(int** matrix, int size)
{
	bool metka = false;
	int i, j, row{};
	for(i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (matrix[i][j] < 0)
			{
				metka = true;
				row = i;
				break;
			}
		}
		if (metka)
		{
			break;
		}
	}
	return row;
}