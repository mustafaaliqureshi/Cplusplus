#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class employee
 {
  private:
    string names;
    double b_pay , h_rent , med_a, g_pay;
  public:
//  employee(string n,double basic)
//        {
//        names = n;
//        b_pay = basic;
//        }
    void setname(string nm){ names = nm;
	}
	void setpay(double bp){ b_pay = bp;
	}
    void calcSalary()
         {
           h_rent = b_pay*60/100;
           med_a = b_pay*20/100;
           g_pay = b_pay + med_a + h_rent;
         }
    void showSalary()
        {
            cout << "Name : \n" << names << endl;
            cout << "Basic  Salary : \n" << b_pay << endl;
            cout << "Home Rent :\n " <<h_rent << endl;
            cout << "Medical Allounces :\n " << med_a << endl;
            cout << "Gross Pay : \n"<< g_pay << endl;
        }

 };
int main()
{
  employee e1;
  string name;
  float b_py;
  cout << "Enter Employee Name :\n ";
  getline(cin, name);
  cout << "Enter Employee Basic Pay\n ";
  cin >> b_py;
  e1.setname(name);
  e1.setpay(b_py);
  e1.calcSalary();
  e1.showSalary();
  return 0;
}

