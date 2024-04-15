#include <iostream>
#include <conio.h>
#include "12-1.hpp"
#include "12-2.hpp"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int choice_zad, choice_var;
	cout << "Введите номер варианта: ";
	cin >> choice_var;

	cout << "Введите номер задания: ";
	cin >> choice_zad;

	switch (choice_var) {
	case 12:
		switch (choice_zad) {
		case 1:
			_12_1();
			break;
		case 2:
			_12_2();
			break;
		}
	}

	system("pause");
}