#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char t, probel; probel = ' ';
	cout << "Введите символ "; cin >> t;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(4) << setfill(t) << t << endl;
	cout << setw(57) << setfill(probel) << probel;
	cout << setw(10) << setfill(t) << t << endl;
	cout << setw(56) << setfill(probel) << probel;
	cout << setw(12) << setfill(t) << t << endl;
	cout << setw(56) << setfill(probel) << probel;
	cout << setw(12) << setfill(t) << t << endl;
	cout << setw(57) << setfill(probel) << probel;
	cout << setw(10) << setfill(t) << t << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(4) << setfill(t) << t << endl;
}