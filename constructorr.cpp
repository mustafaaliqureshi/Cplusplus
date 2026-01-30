#include <iostream>
//
// Created by musta on 5/5/2025.
//
#include <string>
using namespace std;
class student
{
    private:
    string name;
     float avg;
    int sub1,sub2,sub3,total = sub1 + sub2 + sub3;
    public:
      student(int a,int b,int c,string n){
      sub1 = a;
      sub2 = b;
      sub3 = c;
      name = n;
      }
    	void calavg()
     {
     
      avg = total/3;}
    
	 void show(){
          cout << "Name: " << name << endl;
          cout << "Sub1: " << sub1 << endl;
          cout << "Sub2: " << sub2 << endl;
          cout << "Sub3: " << sub3 << endl;
          cout << "average: " << avg << endl;
      }
};
          
int main()
{
    student s1(70,80,77,"Ali");
    s1.calavg();
    s1.show();
    return 0;
}


