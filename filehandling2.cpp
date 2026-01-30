#include <iostream>
#include <fstream>  // for file input
#include <string>   // for reading lines
using namespace std;

int main() {
    ifstream file("student.txt");  // Open file for reading
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;  // Print each line
        }
        file.close();  // Close file
    } else {
        cout << "Could not open file!" << endl;
    }

    return 0;
}
