//WRITE A PROGRAM TO SHOW FUNCTION OVERLOADING USING CLASS.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a - b;
}

int main() {
    int result1 = add(5, 7);
    double result2 = add(3.5, 2.5);
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    return 0;
}