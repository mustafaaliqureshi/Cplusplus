#include <iostream>
using namespace std;
int main()
{
    int q[8], N, front = NULL, rear = front, item=1;
    if(front ==1 || front == rear+1)
    {
        cout << "Overflow";
        return N;

    }
    if(front == 0)
    {
        front == 1 && rear == 1;
        cout << "front 0";
    }
    else if(rear == N)
    {
        rear == 1;
    }
    else 
        rear = rear+1;

    q[rear]=item;
    cout << q[rear];



}