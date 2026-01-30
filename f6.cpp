#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void copyStudent(Student s1, Student &s2) {
    s2 = s1;  // Copy values from s1 to s2
}

int main() {
    Student student1 = {"Ali", 19}, student2;
    copyStudent(student1, student2);
    cout << "Copied Student Data - Name: " << student2.name << ", Age: " << student2.age << endl;
    return 0;
}
