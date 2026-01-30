#include <iostream>
using namespace std;
int main()
{
	int stk[]={0,1,2,3,4,5};
	int size = sizeof(stk)/sizeof(stk[0]);
	cout << size;
	return 0;
}