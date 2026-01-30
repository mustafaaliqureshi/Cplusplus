#include <iostream>
#include <fstream>  // Needed for file handling
using namespace std;

int main() {
    ofstream file("student.txt");  // create/open file for writing

    if (file.is_open()) {
        file << "Name: Mustafa Ali Qureshi\n";
        file << "Roll No: 123\n";
        file.close();  // close the file
        cout << "Data saved successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
