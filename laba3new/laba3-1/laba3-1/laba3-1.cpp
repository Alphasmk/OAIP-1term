#include <iostream>
using namespace std;

void main() {
	double t, u, x = 0.095, r = 5e-6;
	int k = 6;
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 1 / 3) + 1) / (1 - exp(k - 4));
	cout << "t = " << t << endl;
	cout << "u = " << u;
}

//12