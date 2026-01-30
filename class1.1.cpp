#include <iostream>
#include <string>
using namespace std;

class student {
private:
	string name, address, Class;
	int roll_number;
public:
	void set_name(string n) { name = n; }
	void set_address(string a) { address = a; }
	void set_class(string c) { Class = c; }
	void set_roll_number(int r) { roll_number = r; }
	// get functions
	string get_name() { return name; }
	string get_address() { return address; }
	string get_Class() { return Class; }
	int get_roll_number() { return roll_number; }
};

int main() {
	int r;
	string n, a, c;
	cout << "****************\n";
	student obj;
	cout << "Enter Data of Student:";

	// Input name
	cout << "\n Name: ";
	getline(cin, n);
	obj.set_name(n);

	// Input roll number
	cout << " \n Roll number: ";
	cin >> r;
	obj.set_roll_number(r);

	// Clear the remaining newline character in the input buffer
	cin.ignore();

	// Input address
	cout << "\n Address: ";
	getline(cin, a);
	obj.set_address(a);

	// Input class
	cout << "\n Class: ";
	getline(cin, c);
	obj.set_class(c);

	// Display output
	cout << "\nUpdated! \n";
	cout << " \nFollowing Student's Data is updated:\n ";
	cout << obj.get_name() << endl
		 << obj.get_address() << endl
		 << obj.get_Class() << endl
		 << obj.get_roll_number() << endl;
	cout << "\n ------------------\n" << endl;

	return 0;
}