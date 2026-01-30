#include <iostream>
#include <string.h>
using namespace std;
class student
{
    private:
    string name,address,section;
    int roll_number;
    public:
    void set_name(string n){name = n;}
    void set_address(string a){address =a;}
    void set_roll_number (int r){roll_number = r;}
    void set_section(string s){section =s;}
    
    string get_name(){return name;}
    string get_address(){return address;}
    int get_roll_number(){return roll_number;}
    string get_section(){return section;}
 // constructor
 // student(string n, string a, int r, string s)
 // {
    // name = n;
    // address = a;
    // roll_number = r;
    // section = s;

};
int main()
{
   
    student obj1;
    cout << "Enter student 1 name:";
    cin >> 
	obj1.set_name;
    cout << " \n Enter student 1 address:";
    cin >> obj1.set_address;
    cout << "\n Enter student 1 roll number:";
    cin >> obj1.set_roll_number;
    cout << " \n Enter student 1 section:";
    cin >> obj1.set_section;



    cout<<"student 1 data is as follows"<<obj1.get_name<<endl<<obj1.get_address<<endl<<obj1.get_roll_number<<endl<<obj1.get_section<<endl;
    return 0;

}
