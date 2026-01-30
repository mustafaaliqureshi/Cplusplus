#include <iostream>
using namespace std;
int main()
{
	int n=5, Q[n], front, rear, item;
	cout <<"Enter front: ";
	cin >> front;
	cout << "  Enter rear: ";
	cin >> rear;
	if (front == 0 && rear ==n || front == rear +1)
		cout << "\n overflow ";
		
	else if (front == 0)
		front = rear = 1;
	else if(rear == n)
	 	rear = 1;
	else 
	 	rear =rear+1;
	Q[rear] = item;
	for (int i = 1; i<6;i++)
	{
		cout << " \n"<< Q[i];
	}
	
	return 0;
}