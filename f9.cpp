#include <iostream>
using namespace std;

int sumOddNumbers(int arr[], int size) {
    int sum = 0;
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        } else {
            sum += arr[i];
        }
    }
    cout << endl;
    return sum;
}

int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum = sumOddNumbers(arr, 5);
    cout << "Sum of odd numbers: " << sum << endl;
    return 0;
}
