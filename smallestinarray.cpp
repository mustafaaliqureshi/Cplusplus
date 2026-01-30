//arrays yt@apnacollege
#include<iostream>
using namespace std;
int main()
{
    int size = 6, la[size], smallest = __INT_MAX__;

    for(int i=0;i<size;i++)
    {

        cout << " enter in arr["<<i<<"]: ";
        cin >> la[i];

        smallest = min(smallest,la[i]);//direct built-in approach

        cout << &la[i];
        // if(la[i]<smallest)//manual approach
        //     smallest = la[i];
            
    }

    cout << "\nSmallest is the: "<< smallest<< endl;

    return 0;//fine
}
//int &ref = smallest;//wrong-show location of smallest nor nor the smallest number
//static int &ref = smallest;//sticks to it(smallest)
//unable to reference the address of the smallest value from the array