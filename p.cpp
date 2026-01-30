#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, fn;

    cout << "Enter your full name: ";
    cin.ignore();  // Ignore any leftover newline characters
    getline(cin, name);  // Read full name (including spaces)

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your favorite number: ";
    cin >> fn;

    cout << "\nYour Data:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favorite Number: " << fn << endl;

    return 0;
}
