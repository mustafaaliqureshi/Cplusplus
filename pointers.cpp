#include <iostream>
using namespace std;
int main()
{
	// int array[2][2] = { {0,1},{2,3}};
	// int const n=2;
	// for(int i=0;&&i<=n;i++)
	// {
	// 	for(int j=0;j<=n;i++)
	// 	{
	// 		cout<<" 2d array is "<<array[i][j];
	// 		cout<<endl;
	// 	}
	// }
	int v = 34, c ;
	int *p = &v;
	cout << *p << endl;
	p = &v;
	cout << p<< endl;
	c = *p;
	cout << c << endl;
	return 0;
	
}