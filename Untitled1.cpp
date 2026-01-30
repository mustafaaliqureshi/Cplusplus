#include <iostream>
using namespace std;
int main(){
	int n[7],n2[7],a;
	int sizen = sizeof(n)/__SIZEOF_INT__;
	int sizen2 = sizeof(n2)/ __SIZEOF_INT__;
	float avg;
	for (int i=0;i<7;i++){
		cout<<"Enter a number in array: "<<i<<" \n";
		cin>>n[i];
	}
	for (a=0;a<7;a++){
		cout<<"Enter a number in array 2: "<<a<<" \n";
		cin>>n2[a];
	}
	for (;a<7;a++)
	{
	avg=(n[a]+n2[a])/2;
	}
	cout<<"The average of the numbers is "<<avg;
	
	return 0;
	
}