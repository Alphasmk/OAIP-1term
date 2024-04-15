#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int A[15], B[15], i, j, k, count = 0;
	for (k = 0; k < 15; k++)
	{
		*(A + k) = rand() % 99;
		*(B + k) = rand() % 99;
	}

	for (k = 0; k < 15; k++)
	{
		cout << *(A + k) << " ";
	}

	cout << endl;

	for (k = 0; k < 15; k++)
	{
		cout << *(B + k) << " ";
	}

	cout << endl;

	for (i = 0; i < 15; i++)
	{
		for (j = i; j < 15; j++)
		{
			if (*(A + i) == *(B + j))
			{
				count++;
			}
		}
	}

	cout << "Кол-во пар: " << count;
	_getch();
}