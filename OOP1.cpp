#include <iostream>
#include <string>
using namespace std;
class person
{
	private:
	string first, last, name = first +" "+last;
	public:
		void setName(string first, string last )
		{
			this->first = first;
			this->last = last;
		}
		void printName() const 
		{
			cout<< first << " " << last << endl;//encapsulation: access private data members via...
		}
		person() {}
		~person(){}
};
class Employee: person//inheritance
{
	private://abstraction: hide from unnesessary use
		std::string department;
	public:
		
};
int main()
{
	person p;
	void p.setName('ali','qureshi');
	return 0;
}