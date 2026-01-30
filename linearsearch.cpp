#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,5,3,5,23,5}, target = -1, a=0;
    cout << "enter what to search ";
    cin>>target;
    for(;a<5; ++a)
    {
        if(arr[a]==target)
            cout << "target found at "<< arr[a]<< endl;
         
    }
    cout << "target not found";
    return 0;
}