#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk;
	cout << "dx = ";
	cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = x;
		if (x <= -1)
		{
			B = log10(abs(cos(5 * x))) + exp(1 / x + x);
		}
		else if (x >= 0.4)
		{
			B = sin(5 * x) - sqrt(abs(1 - x));
		}
		else
		{
			sqrt(pow(2 - x, 3)) - tan(x);
		}
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;

	return 0;
}
