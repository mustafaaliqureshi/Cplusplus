#include <iostream>
using namespace std;
int main(){

int temp,h;
cout<<"what is Temperature\n";
cin>>temp;
cout<<"how much humidity\n ";
cin>>h;
if(temp >=30 || h>=60)
{
	cout<<"swim";
}
else if(temp>=30 || h>=30)
{
	cout<<"play tennis";
}
else if(temp>=10 || h>=30)
{
	cout<<"play basketball";
}
else if(temp>=10 || h>=60)
{
	cout<<"watch tv";
}
return 0;
}