#include <iostream>
using namespace std;

void calc() {
    int a, b, op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation (1=add, 2=sub, 3=mul, 4=div): ";
    cin >> op;

    switch(op) {
        case 1:
            cout << "Result is " << a + b << endl;
            break;
        case 2:
            cout << "Result is " << a - b << endl;
            break;
        case 3:
            cout << "Result is " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result is " << a / b << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
}

int main() {
    calc();
    return 0;
}