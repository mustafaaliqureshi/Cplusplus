#include <iostream>
using namespace std;

int main() {
	char choice;
	int count;
    do {
    count++;
    cout << "Iteration # " << count << endl;
    
    do {
        cout << "Continue? (y/n): ";
        cin >> choice;
    } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

} while (choice == 'y' || choice == 'Y');

    return 0;
}