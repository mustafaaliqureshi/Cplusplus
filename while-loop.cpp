#include <iostream>
using namespace std;

int main() {
    int a = 100, sum = 0;

    // Print even numbers from 1 to 100
    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            cout << "Even is " << i << endl;
            sum += i;  // Add even number to sum
        }
    }
    cout << "\nSum of even numbers from 1 to 100 is: " << sum << endl;
    // Now decrease a from 100 to 50
    while (a >= 50) {
        a--;
    }


    cout << "Value of a after decrement loop: " << a << endl;

    return 0;
}
