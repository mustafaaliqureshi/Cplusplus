#include <iostream>
#include <string>
using namespace std;
int main()
{
    int o[]={1,2,3,4,5,6,7,8}, avg=0;
    int a = sizeof(o)/4;
    cout << a;
    a = 0;
    for(int i = 0; i < a; ++a)
    {
        avg = o[i]/i;
        cout << avg << endl;
    }
    cout << endl << " \n average is "<< avg<< endl;
    return 0;
}