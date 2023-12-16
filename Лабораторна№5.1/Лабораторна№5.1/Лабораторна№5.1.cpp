#include <iostream>

using namespace std;

void f(double* a) {
	*a = pow(sin(*a), 2) + pow(*a, 2) + 1;
}

int main()
{
	double x;
	cout << "Please enter the x : ";
	cin >> x;
	double a;
	double b;
	double c;

	f(&x);
	a = 1 + x;
	f(&a);
	b = 1 + pow(x, 2);
	f(&b);
	b = pow(b, 2);
	c = (x + a) / (1 + b);

	cout << c << endl << endl;
}