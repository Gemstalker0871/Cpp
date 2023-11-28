//WRITE A PROGRAM TO IMPLEMENT CONSTRUCTOR OVERLOADING
#include <iostream>

class MyClass {
public:
    // Default Constructor
    MyClass() {
        std::cout << "Default Constructor called" << std::endl;
    }

    // Parameterized Constructor
    MyClass(int value) {
        std::cout << "Parameterized Constructor called with value: " << value << std::endl;
    }

    // Another Parameterized Constructor
    MyClass(int value1, int value2) {
        std::cout << "Parameterized Constructor called with values: " << value1 << " and " << value2 << std::endl;
    }
};

int main() {
    // Using different constructors
    MyClass obj1;                // Calls the Default Constructor
    MyClass obj2(42);            // Calls the Parameterized Constructor with one argument
    MyClass obj3(10, 20);        // Calls the Parameterized Constructor with two arguments

    return 0;
}