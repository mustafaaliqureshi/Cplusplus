#include <iostream>
using namespace std;
void table (double num);
int main()
{
	double n;
	cout << "Welcome"<<endl;
	cout << "Enter number:\n";
	cin >> n;
	table(n);
	return 0;	

}
void table (double num)
{
	double t = 1;
	for (;t<=10;t++)
	{
		cout << num << " * " << t << " = " << t*num <<endl;
	}
	cout << "operation done.\n-____________________-\n\n";
	
}