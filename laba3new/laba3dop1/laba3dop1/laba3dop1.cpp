#include <iostream>
using namespace std;

void main()
{
	double z, y, b = -0.12, x = 1.3e-4;
	int n = 2;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-1 * b) + 1) / 2 * z;
		cout << "z =" << z << endl;
		cout << "y =" << y;
}
// 2