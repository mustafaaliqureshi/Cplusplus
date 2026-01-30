//largest in array yt@apnacollege
#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    int smallest = __INT_MAX__;
    int largest = 110;//just initialize, INT_MIN - error
    for(int i=0;i<7;i++)
    {
        cout << "Enter element in array["<<i<<"]: ";
        cin >> arr[i];
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "smallest is the: "<<smallest<< "\nlargest is the: "<<largest;
    return 0;
}

    /* char arr[7];
    // int size = sizeof(arr)/sizeof(char);
    // char largest = __SCHAR_MAX__;
    // cout << size<<endl;
     

    for (int i =0; i<7;i++)
    {
        cout << "enter element in array["<<i<<"]: ";
        cin>>(arr[i]); 
        if(!arr[i]>largest)
            largest = arr[i];
    }
    cout << "largest element in array is: "<<largest<<endl;*/