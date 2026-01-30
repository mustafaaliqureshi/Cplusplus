#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person
{
protected:
	string Names,Address,CNIC;
	int PhoneNumber;
public:
	void setName(string name){ Names = name;}
	string getName(){ return Names;}

	void setPhoneNumber(int number){ PhoneNumber = number;}
	int getPhoneNumber(){ return PhoneNumber;}

	void setAddress(string address){ Address = address;}
	string getAddress(){ return Address;}

	void setcnic(string cnic){ CNIC = cnic;}
	string getcnic(){ return CNIC;}

};
class employee : public Person {
public:
    employee(string nm, double BP, double HR = 0, double MA = 0, double NP = 0, double T = 0, double GP = 0)
        : Person(), BasicPay(BP), HouseRent(HR), MedAl(MA), NetPay(NP), Tax(T), GrossPay(GP)
    {
        Names = nm;
    }
    employee() : Person(), BasicPay(0), HouseRent(0), MedAl(0), NetPay(0), Tax(0), GrossPay(0) {}

private:
    double BasicPay, HouseRent, MedAl, NetPay, Tax, GrossPay;

public:
    void setBasicPay(double bp)
    {
        BasicPay = bp;
    }
    void CalcSalary()
    {
        HouseRent = BasicPay * 40 / 100;
        MedAl = BasicPay * 20 / 100;
        GrossPay = BasicPay + HouseRent + MedAl;
        Tax = GrossPay * 10 / 100;
        NetPay = GrossPay - Tax;
    }
    void SS()
    {
        CalcSalary();
        cout << "Name: " << Names << endl;
        cout << "Basic pay: " << BasicPay << endl;
        cout << "House Rent: " << HouseRent << endl;
        cout << "Medical Allowances: " << MedAl << endl;
        cout << "Tax: " << Tax << endl;
        cout << "Gross Pay: " << GrossPay << endl;
        cout << "Net Pay: " << NetPay << endl;
        cout << "________________________" << endl;
    }
    ~employee() {}
};
int main ()
{
	employee e1;
    string emp_name;
	double basic_pay;
    char ask;
	cout << "Welcome to Salary Calculator\n";
    do
    {
	cout << "Enter Employee Name: ";
	getline(cin,emp_name);
	cout << "\n done.\a \n Now enter the basic pay of Employee\n";
	cin >> basic_pay;
	e1.setName(emp_name);
    e1.setBasicPay(basic_pay);

	cout << "Thank You for Providing the details.\a \nFollowing are the detail from Provided Data:\n";
	e1.SS();
    cout <<"do you want to Calculate another Employee's Salary?\n Enter Y/N\n";
    cin >> ask;
    }
    while(ask == 'y'||ask == 'Y');
	cout <<endl<<"Wohooo.I got my result.\n";

		return 0;
}