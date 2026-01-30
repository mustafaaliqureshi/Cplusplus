#include <iostream>
using namespace std;
void hb(string name,int age);

 int main()
{
	string name;
	cout<<"name ";
	cin>>name;
		int age =19;
	hb(name, age);
	hb(name, age);
	hb(name, age);
	hb(name, age);
	
}
void hb(string name,int age){
	cout<<"happy birthday \n"<<name<<endl;
	cout<<"happy birthday \n"<<name<<age;
	cout<<"happy birthday \n";
	cout<<"happy birthday to you\n\n";
	cout << " enter age "<<endl;
	cin>>age;
	cout<<"your age is"<<age;
}