//WAP TO ACCESS GLOBAL VARIABLES USING SCOPE RESOLUTION OPERATOR
#include<iostream>

using namespace std;

// Global variable
int globalVar = 10;

int main() {
    // Accessing global variable using scope resolution operator
    cout << "Global Variable: " << ::globalVar << endl;

    // Local variable with the same name
    int globalVar = 5;

    // Accessing local variable
    cout << "Local Variable: " << globalVar << endl;



    return 0;
}