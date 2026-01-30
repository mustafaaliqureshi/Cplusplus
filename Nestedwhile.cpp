#include <iostream>
#include <string>
using namespace std;

double square(double x) {
    return x * x;
}

void print_square(double x) {
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
    double n = 1.0;  // Changed from float to double for consistency
    string choice;
    
    do {
        cout << "enter number: ";
        cin >> n;
        cin.ignore();  // Clear the newline character
        
        print_square(n);

        do {
            cout << "continue?(y/n) ";
            getline(cin, choice);
        } while(choice != "Y" && choice != "y" && 
                choice != "N" && choice != "n");
                
    } while(choice == "y" && choice == "Y");
    
    return 0;
}