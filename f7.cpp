#include <iostream>
using namespace std;

double power(double base, int exp) {
    double result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = " << power(base, exp) << endl;
    return 0;
}
