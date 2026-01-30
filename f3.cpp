#include <iostream>
using namespace std;

int findLength(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string: " << findLength(str) << endl;
    return 0;
}
