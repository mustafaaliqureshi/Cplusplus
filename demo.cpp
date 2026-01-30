#include <iostream>
using namespace std;
int main()
{
	//serial search in array
	int n =6, item, loc = -1;//initialize loc
	int a[n] = {1, 2, 5, 6, 45, 34, 32};
	cout << "What element to search: ";
	cin >> item;
	a[n+1]= item;//insert item at the end of a
	while(a[loc]!=item)
	{
		loc +=loc;
	}
	if (loc = n+1){
	loc = 0;
	cout << "not found";
	}
	 else 
		cout << "found at location "<< loc;
	return 0;
}