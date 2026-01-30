#include <iostream>
int main()
{
	int stk[4]={1,2,3,4,5}, item = 6,top , Size = sizeof(stk)/sizeof(stk[0]);;
	if (stk==Size)
	{
		std::cout << "overflow";
		
	}
	else
	{
		++top;
		std::cout <<"new item is: "<<item;	
		stk[top]=item;
		std::cout <<" updated \n";
	}
	for(int i=0; i<6;i++)
	{
		std::cout << "\n elements in stack: "<<i<<" is "<< stk[i];
		
	}
	return 0;
}