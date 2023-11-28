//WRITE A PROGRAM IN C++ TO SHOW THE USE OF INLINE FUNCTION
#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    int result = calc.add(5, 7);
    cout << "Result: " << result << endl;
    return 0;
}