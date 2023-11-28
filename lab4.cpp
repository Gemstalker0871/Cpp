/*WRITE A PROGRAM TO CREATE A CLASS EMPLOYEE AND PERFORM FOLLOWING OPERATIONS FOR 5 EMPLOYEES: -
a)	ENTER EMPLOYEE ID, NAME, DEPARTMENT, AGE, BASIC SALARY, BONUS FROM THE USER.
b)	CALCULATE TOTAL SALARY AS BASIC SALARY + BONUS.
c)	DISPLAY ALL THE DETAILS OF THE EMPLOYEE IN THE FOLLOWING FORMAT-
EMPLOYEE ID:
NAME:
DEPARTMENT:*/

#include<iostream>
#include<string>

using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    string department;
    int age;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    // Member function to enter details of an employee
    void enterDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cin.ignore(); // Clear the newline character from the buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Bonus: ";
        cin >> bonus;

        // Calculate total salary
        totalSalary = basicSalary + bonus;
    }

    // Member function to display details of an employee
    void displayDetails() {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Age: " << age << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    // Creating an array of Employee objects for 5 employees
    Employee employees[5];

    // Entering details for each employee
    for (int i = 0; i < 5; ++i) {
        cout << "\nEnter Details for Employee " << i + 1 << ":" << endl;
        employees[i].enterDetails();
    }

    // Displaying details of each employee
    for (int i = 0; i < 5; ++i) {
        employees[i].displayDetails();
    }

    return 0;
}