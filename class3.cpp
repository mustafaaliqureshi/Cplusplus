#include <iostream>
#include <string>
using namespace std;
class niche 
{
    private:
    string name;
    public:
    void set_name(string n){name = n;}
    string get_name(){return name;}
    niche contatenation(niche obj){//Object as an arguments
        niche temp;
        temp.name=name + obj.name;
        return temp.name;
    }
};
int main()
{
    niche obj1,obj2,obj3;
    string name1,name2;
    cout << "Enter first name: ";
    cin >> name1;
    obj1.set_name(name1);
    
    cout << "Enter second name: ";
    cin >> name2;
    obj2.set_name(name2);
    
    obj3 = obj1.contatenation(obj2);
    
    cout << "Concatenated name: " << obj3.get_name() << endl;
    
    return 0;
}