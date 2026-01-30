#include <iostream>
using namespace std;
int main()
{
    bool isPrime = true;
    int n='M';
    for (int i = 2; i*i<n; ++i)//i<=n || i*i<=n
    {
        if(n%i == 0)
        {
            isPrime = false;
        }
        break;
    }
    if (isPrime ==true)
    {
        cout<<" prime \n";
    }
    else{
        cout <<"non prime";
    }
   return 0;
}