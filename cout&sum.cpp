#include <iostream>
using namespace std;
int main()
{
    int la[]={0,1,2,3,4,5,6,7}, sum = 0;
    static int count = NULL;
    /*cout<< count<<endl;
    cout <<endl;*/
    for(int i = 0;i<8;i++)
    {
        cout <<"\nla at "<<i<<" is la["<<la[i]<<"]";
        sum +=la[i];
        cout << "\nsum is "<< sum<<endl;
        cout << count;
        ++count;
        cout << " counter then "<< count<<endl;
    }
    
    cout << " \n"<<count<<endl<<sum;
    return 0;
}