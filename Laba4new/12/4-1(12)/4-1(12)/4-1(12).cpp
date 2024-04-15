#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Rus");
	char t, probel; probel = ' ';
	cout << "Введите символ: "; cin >> t;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
}
//12-1