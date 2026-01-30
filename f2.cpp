#include <iostream>
using namespace std;

void findLargest(float a, float b, float c, float d) {
    if (a == b && b == c && c == d) {
        cout << "All numbers are equal" << endl;
        return;
    }

    float max = a;  
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    cout << "Largest Number: " << max << endl;
}

int main() {
    float num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    findLargest(num1, num2, num3, num4);
    return 0;
}
