#include <iostream>
using namespace std;
class demo
{
    public:
    static int n;
    demo(){ 
        cout << " this is constructor: "<< n << " ";  
        ++n; 
        cout << n;
    }
    ~demo(){
        ++n; 
        cout << "\n this is destructure:"<<n;
    }
};
int main()
{
    demo o, o1, o2, o3;
    demo::n = 0;
    cout << "main function";
    return 0;
}