#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Calculator";
    int number1, number2;
    cout << "\nEnter a number\n";
    cin >> number1;
    cout << "Enter second number\n";
    cin >> number2;
    char op;
    cout << "Which operation do you want (+, -, *, /, %): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 != 0)
                cout << "Result: " << number1 / number2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        case '%':
            if (number2 != 0)
                cout << "Result: " << number1 % number2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    char r;
    cout << "Do you want to continue or exit (y/n): ";
    cin >> r;
    while (r == 'y' || r == 'n') {
        if (r == 'y') {
            main(); // Restart the program
        } else {
            break;
        }
    }

    return 0;
}