#include <iostream>
using namespace std;
float sum(int i,int sum)
{
	
	
for(i=1;i<=10;i++)
sum+=i;
return sum;
}
int main()
{
	cout<<"sum is"<<sum(19,29)<<endl;
	cout<<"sum is"<<sum(39,45)<<endl;
	cout<<"sum is"<<sum(10,20)<<endl;	
}