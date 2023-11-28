//WRITE A PROGRAM TO CREATE A CLASS TO ENTER DETAILS OF STUDENTS AND DISPLAY THEM
#include<iostream>
#include<string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Member function to enter details of a student
    void enterDetails() {
        cout << "Enter Name: ";
        getline(cin, name);  // Allowing for spaces in the name
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Member function to display details of a student
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating an object of the Student class
    Student student1;

    // Entering details for the student
    cout << "Enter Details for Student 1:" << endl;
    student1.enterDetails();

    // Displaying details of the student
    student1.displayDetails();

    return 0;
}