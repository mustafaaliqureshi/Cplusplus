#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<=1;i++)
    {
        cout<<"\n(*";
        for(int j=0;j<=1;j++)
        {
            cout<<"*";
            for(int k=0;k<=1;k++)
            {
                cout<<"*";
                for (int l=0; l<=1;l++)
                {
                    cout<<"*";
                   // cout<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<endl;
                }
            }
        }
    }
    return 0;
}