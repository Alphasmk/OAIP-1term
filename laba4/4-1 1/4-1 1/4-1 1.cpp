#include <iostream>
#include <iomanip>
using namespace std;

 void main()
 {
	setlocale(LC_CTYPE, "Russian");
	char t, probel; probel = ' ';
	cout << "Введите символ "; cin >> t;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(56) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(52) << setfill(probel) << probel;
	cout << setw(17) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(25) << setfill(t) << t << endl;
	cout << setw(52) << setfill(probel) << probel;
	cout << setw(17) << setfill(t) << t << endl;
	cout << setw(56) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
 }