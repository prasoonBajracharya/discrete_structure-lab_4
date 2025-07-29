#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1.0;

    
    bool isNegative = (exponent < 0);
    if (isNegative) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    if (isNegative) {
        return 1.0 / result;
    } else {
        return result;
    }
}

int main() {
    double a;
    int n;

    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = power(a, n);

    cout << a << "^" << n << " = " << result << endl;

    return 0;
}

