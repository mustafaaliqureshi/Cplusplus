#include <iostream>
using namespace std;
float invertex (float watt,float hour)
{
	
	cout << "This is energy consumption calculator.\n";
	cout << "Enter energy consumes in watts";
	cin >> watt;
	cout << "Enter duration in hours";
	cin >> hour;
	float energy = hour*watt;
	return energy;
}
	int main()
	{
		cout << "Welcome\n***********";
		cout << "\nEnter data to calculate\n\n";
		double watts,hours,result;
		
	
		result=invertex(watts,hours);
		cout << "here is the result "<<result;
		return 0;
	}
