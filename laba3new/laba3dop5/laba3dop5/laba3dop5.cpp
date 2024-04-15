#include <iostream>
using namespace std;

void main() {
	double y, w, x = 1.4, z = 0.05e-5;
	int m = 6;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	cout << "y = " << y << endl;
	cout << "w = " << w;
}
//7