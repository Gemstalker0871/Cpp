//WRITE A PROGRAM TO SHOW THE USE OF STATIC VARIABLE AND STATIC FUNCTION
#include <iostream>

class MyClass {
private:
    static int staticVariable;

public:
    static void staticFunction() {
        std::cout << "Static function called." << std::endl;
    }

    void incrementAndDisplay() {
        staticVariable++;
        std::cout << "Static Variable: " << staticVariable << std::endl;
    }
};

int MyClass::staticVariable = 0;

int main() {
    MyClass::staticFunction();

    MyClass obj1, obj2;
    obj1.incrementAndDisplay();
    obj2.incrementAndDisplay();

    return 0;
}