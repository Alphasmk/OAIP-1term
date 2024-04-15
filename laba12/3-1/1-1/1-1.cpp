#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int i, A[15], B[15], t, countA = 0, countB = 0;

	cout << "Введите t: "; cin >> t;

	for (i = 0; i < 15; i++)
	{
		A[i] = rand() % 99;
		B[i] = rand() % 99;
	}

	for (i = 0; i < 15; i++)
	{
		if (*(A + i) < t)
		{
			countA++;
		}

		if (*(B + i) < t)
		{
			countB++;
		}
	}
	
	int* pa, * pb;
	pa = &countA;
	pb = &countB;

	if (*pa > *pb)
	{
		for (i = 0; i < 15; i++)
		{
			cout << *(A + i) << " ";
		}
	}
	else if (*pb > *pa)
	{
		for (i = 0; i < 15; i++)
		{
			cout << *(B + i) << " ";
		}
	}
	else if (*pb == 0 && *pa == 0)
	{
		cout << "В массивах нет элементов, которые меньше t";
	}
	else if(*pb == *pa)
	{
		cout << "В массивах одинаковое количество элементов, которые меньше t";
	}
	_getch();
}