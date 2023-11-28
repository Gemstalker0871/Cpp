//WRITE A PROGRAM TO IMPLEMENT FRIEND FUNCTION
#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string n) : name(n) {}

    friend void displayStudentName(Student s);
};

void displayStudentName(Student s) {
    cout << "Student's name: " << s.name << endl;
}

int main() {
    Student student("Alice");
    displayStudentName(student);
    return 0;
}