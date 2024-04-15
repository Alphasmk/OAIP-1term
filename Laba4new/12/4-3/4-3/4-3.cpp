#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b, c, d, t;
	setlocale(LC_CTYPE, "rus");
	cout << "Введите трехзначное число: "; cin >> a;
	b = (a - (a % 100)) / 100;
	c = a % 100;
	c = (c - (c % 10)) / 10;
	d = a % 100;
	d = d % 10;
	d = d * 100;
	c = c * 10;
	t = b + c + d;
	cout << "Реверсное число: " << t;
}

//12-2