#include <iostream>
using namespace std;
main(){
	cout<<"Welcome to Calculator";
	int number1,number2;
	cout<<"\n Enter a number\n";
	cin>>number1;
	cout<<"Enter second number\n";
	cin>>number2;
	char op[5] = +,-,*,%,/ ;
	cout<<"Which operation you want";
	while (op==+)
	{
	cout<<number1+number2;
	break;
	}
	(cin==-)
	{
	cout<<number1-number2;
	break;
	}
	(cin==*)
	{
	cout<<number1*number2;
	break;
	}
	(cin==/)
	{
	cout<<number1/number2;
	break;
	}
	(cin==%)
	{
	cout<<number1%number2;
	break;
	}
	cout<<"Operation completed\n";
	char r;
	cout<<"do you want to continue or exit";
	cin>>r;
	while (r==y||r==n)
	cout<<"Loading";
	if (r==y)
	continue 
	esle
	break
}