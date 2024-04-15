#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b, c;
	cout << "Введите двухзначное число: "; cin >> a;
	b = a % 10;
	c = (a - b) / 10;
	if (b == 1 || b == 9 || c == 1 || c == 9)
		cout << "Есть 1 или 9";
	else
		cout << "Нет 1 или 9";
}