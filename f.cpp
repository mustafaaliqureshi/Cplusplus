#include <iostream>
#include <string>
using namespace std;    
int main()
{
    string name1,name2;
    cout << "Enter first name: ";
    cin >> name1;
    
    cout << "Enter second name: ";
    cin >> name2;
    
    string concatenated_name = name1 + name2;
    
    cout << "Concatenated name: " << concatenated_name << endl;
    
    return 0;
}
// This code takes two names as input from the user and concatenates them.