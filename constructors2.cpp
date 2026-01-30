#include <iostream>
#include <string>
using namespace std;
class student {
private:
    string name,address;
    int rollno,marks;
public:
    student(string n, string ad, int rn, int mrk): name(n), address(ad), rollno(rn), marks(mrk) {}
    student(int r,string n ) {
        rollno = r;
        name = n;
    }
    student (int rn,string nm,int mrk) {
        rollno = rn;
        name = nm;
        marks = mrk;
    }
    student (int mk)
    { marks = mk;}
    student getter()
    {
    	return student(0);
	}
    ~student(){cout << "destructor";}

};
int main() {
    student s1(980),s2(5,"ali",500),s3(1,"peshawar");
    cout << "these are data";
//    cout << s1 <<endl <<s2 <<endl <<s3 <<endl;
    return 0;
}