#include <iostream>
#include <string>
using namespace std;

// Nested structure: Address used inside Student
struct Address {
    string city;
    string country;
};

// Structure: Student
struct Student {
    string name;
    int age;
    float marks;
    Address addr;  // Nested structure member
};

// Function prototypes (declarations)
Student createStudent();                   // Returns a Student struct
void displayStudent(const Student &s);     // Displays a Student's details
void processStudent(const Student &s);       // Processes a Student with nested if-else

int main() {
    const int MAX_STUDENTS = 5;  // Maximum number of students allowed
    Student students[MAX_STUDENTS];  // Array to store students
    int count = 0;  // How many students have been added
    int choice;   // User's menu choice

    // Main menu loop using do-while
    do {
        cout << "\n--- Student Management Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Process a Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        // Switch statement to choose an action
        switch (choice) {
            case 1:
                if (count >= MAX_STUDENTS) {
                    cout << "Student list is full!\n";
                } else {
                    students[count] = createStudent();
                    count++;
                    cout << "Student added successfully.\n";
                }
                break;
            case 2:
                if (count == 0) {
                    cout << "No students to display!\n";
                } else {
                    // For loop to iterate over students
                    for (int i = 0; i < count; i++) {
                        cout << "\nStudent #" << (i + 1) << ":\n";
                        displayStudent(students[i]);
                    }
                }
                break;
            case 3:
                if (count == 0) {
                    cout << "No students available to process!\n";
                } else {
                    int index;
                    cout << "Enter student number (1 to " << count << "): ";
                    cin >> index;
                    // Nested if-else to validate the index
                    if (index < 1 || index > count) {
                        cout << "Invalid student number!\n";
                    } else {
                        processStudent(students[index - 1]);
                    }
                }
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 4);  // Continue until user chooses 4 (Exit)

    // Additional example: while loop with continue and break
    cout << "\n--- Example: While Loop with continue and break ---\n";
    int i = 0;
    while (i < 10) {
        i++;  // Increment first to avoid infinite loop
        if (i == 5) {
            cout << "Skipping number 5 using continue.\n";
            continue;  // Skip printing when i is 5
        }
        if (i == 8) {
            cout << "Breaking loop at number 8 using break.\n";
            break;  // Exit loop when i reaches 8
        }
        cout << "Number: " << i << endl;
    }
    
    return 0;
}

// Function definition: Creates a Student by asking user input
Student createStudent() {
    Student s;
    cout << "Enter student's name: ";
    cin >> s.name;
    cout << "Enter student's age: ";
    cin >> s.age;
    cout << "Enter student's marks: ";
    cin >> s.marks;
    cout << "Enter student's city: ";
    cin >> s.addr.city;
    cout << "Enter student's country: ";
    cin >> s.addr.country;
    return s;
}

// Function definition: Displays details of a Student
void displayStudent(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "City: " << s.addr.city << ", Country: " << s.addr.country << endl;
}

// Function definition: Processes a Student using nested if-else
void processStudent(const Student &s) {
    cout << "\nProcessing student: " << s.name << endl;
    // Nested if-else: Determine eligibility for college admission
    if (s.age >= 18) {
        if (s.marks >= 50)
            cout << "Eligible for college admission.\n";
        else
            cout << "Not eligible due to low marks.\n";
    } else {
        cout << "Student is underage.\n";
    }
}
