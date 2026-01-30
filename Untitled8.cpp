#include <iostream>
using namespace std;

int display(int a,int b)
{
	
	cout<<"\n\ait is my\n "<<a<<endl;;
	cout<<"\nok\n"<<b<<endl;
	return a,b;
}
int main()
{
	int a;
	a = 2; 
	int b = 0;
	b += a;
	cout<<a<<b<<endl;
	display(a,b);
	
}
