#include <iostream>
using namespace std;

void copyString(char source[], char destination[]) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';  // Add null character at the end
}

int main() {
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin >> str1;
    cout << "Enter a string: ";
    cin >> str2;
    copyString(str1, str2);
    cout << "Copied String: " << str2 << endl;
    return 0;
}
