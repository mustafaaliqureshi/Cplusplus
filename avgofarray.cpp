#include <iostream>
using namespace std;
int main()
{
	static int N{3};
	int a[N],sum{0};
;
	for (int i{0}; i<N; i++)
	{
		cout << "input a: "<< endl;
		cin >> a[i];
	}
	for(int i{0};i<N;i++)
	{
		cout <<"\ninitial sum is "<<sum<<endl;
		sum += a[i];
		cout << "final sum is" << sum<<endl;
	}
	cout <<"value of sum "<<sum << " and average of a is: "<< sum/N;
	return 0;
}