//Queue(using Linked List)
#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int value){ data=value; next = NULL;} //: data(value), next(nullptr) {}
};
class Queue{
private:
Node* head;
Node* tail;
public:
    Queue(){ head = tail = NULL;}//: head(nullptr), tail(nullptr) {}
    
    void push(int data){//insert data at tail
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){
        if(empty()){
            cout <<"LL is Empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout << "LL is empty\n";
            return -1;
        }
        return head -> data;
    } 
    bool empty(){//0(1)
        return head == NULL;
    }
};


int main()
{
    Queue q;
   for(int i = 0; i<9;++i)
   {
    q.push(i);
   }
    q.pop();

    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    cout << endl;

    return 0;
}