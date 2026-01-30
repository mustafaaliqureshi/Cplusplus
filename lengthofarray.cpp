#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[4], lenght = 0;
    lenght = end(arr) - begin(arr);
    cout << lenght<< endl;
    cout << begin(arr);
    cout << endl;
    cout << end(arr);
    /*cout << __SIZEOF_INT__<< endl;*/
    return 0;
}