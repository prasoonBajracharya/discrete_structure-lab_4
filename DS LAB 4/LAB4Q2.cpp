#include <iostream>
using namespace std;

long long modExp(long long base, long long exponent, long long mod) {
    long long result = 1;
    base = base % mod;  

    while (exponent > 0) {
                if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }

        
        base = (base * base) % mod;
        exponent = exponent / 2;
    }

    return result;
}

int main() {
    long long b, n, m;

    cout << "Enter base (b): ";
    cin >> b;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;

    long long answer = modExp(b, n, m);

    cout << b << "^" << n << " mod " << m << " = " << answer << endl;

    return 0;
}
