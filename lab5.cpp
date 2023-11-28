//WRITE A PROGRAM TO SWAP TWO NUMBERS USING CALL BY REFERENCE AND CALL BY VALUE USING CLASS
#include<iostream>

using namespace std;

class NumberSwapper {
public:
    // Function to swap two numbers using call by reference
    void swapByReference(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
        cout << "During Swap (Call by Reference): " << a << ", " << b << endl;
    }

    // Function to swap two numbers using call by value
    void swapByValue(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        cout << "During Swap (Call by Value): " << a << ", " << b << endl;
        // Changes made inside this function won't affect the original values
    }
};

int main() {
    NumberSwapper swapper;

    int num1 = 5, num2 = 10;

    // Swap using call by reference
    cout << "Before Swap (Call by Reference): " << num1 << ", " << num2 << endl;
    swapper.swapByReference(num1, num2);
    cout << "After Swap (Call by Reference): " << num1 << ", " << num2 << endl;

    // Swap using call by value
    cout << "\nBefore Swap (Call by Value): " << num1 << ", " << num2 << endl;
    swapper.swapByValue(num1, num2);
    cout << "After Swap (Call by Value): " << num1 << ", " << num2 << endl;

    return 0;
}