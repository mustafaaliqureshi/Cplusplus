#include <iostream>
using namespace std;
int main()
{
	int a,b;
	float su = 0;
	for(a=1;a<=10;a++)
	{
	su+=a;
	}
	cout<<"sum is \n"<<su;
	su = 0;
	for(a=20;a<=37;a++)
	{
	su+=a;
	}
	cout<<"sum is \n"<<su<<endl;
	su = 0;
	for(a=45;a>=39;a--)
	{
	su+=a;
	}
	cout<<"sum is\n "<<su;
}