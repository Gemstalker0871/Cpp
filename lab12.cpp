//WRITE A PROGRAM TO IMPLEMENT CONSTRUCTOR AND DESTRUCTOR
#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass myObject;

    // The object will be automatically destroyed when it goes out of scope
    // and the destructor will be called

    return 0;
}