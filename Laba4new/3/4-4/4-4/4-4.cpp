#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char t, probel; probel = ' ';
	cout << "Введите символ: "; cin >> t;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;;
}
//3