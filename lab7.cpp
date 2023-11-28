//WRITE A PROGRAM TO SHOW RETURN BY REFERENCE USING CLASS
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int num) : value(num) {}

    Number& add(int n) {
        value += n;
        return *this;
    }
};

int main() {
    Number num(5);
    num.add(3).add(2);
    cout << "Result: " << num.value << endl;
    return 0;
}