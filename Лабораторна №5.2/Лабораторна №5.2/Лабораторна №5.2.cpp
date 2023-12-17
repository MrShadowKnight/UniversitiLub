#include <iostream>
#include <cmath>

using namespace std;

double calculateArctg(double x, int n) {
    double result = atan(3.14 / 2);  

    for (int i = 1; i <= n; i++) {
        double term = (i % 2 == 0 ? -1.0 : 1.0) / ((2 * i + 1) * pow(x, 2 * i + 1));
        result += term;
    }

    return result;
}

int main() {
    double x;
    int n;

    cout << "Please enter x (> 1): ";
    cin >> x;

    cout << "Enter the number of members of the series (n): ";
    cin >> n;

    if (x <= 1) {
        cout << "Error: x must be greater than 1." << endl;
        return 1;
    }

    double result = calculateArctg(x, n);

    cout << "arctg(" << x << ") using the Taylor series (n = " << n << "): " << result << endl;

    return 0;
}
