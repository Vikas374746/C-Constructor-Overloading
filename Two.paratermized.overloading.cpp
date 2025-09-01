#include <iostream>
using namespace std;

class fetch {
    int num1 = 3;   // default value
    int num2 = 7;   // another default value
    
public:
    // Default constructor
    fetch() {
    }
    
    // Parameterized constructor with two parameters
    fetch(int x, int y) {
        num1 = x;
        num2 = y;
    }
    
    // Copy constructor
    fetch(const fetch &f) {
        num1 = f.num1;
        num2 = f.num2;
    }
    
    // Display function
    void disp() {
        cout << "Numbers are " << num1 << " and " << num2 << endl;
    }
};

int main() {
    fetch f1;          // Default constructor (num1=3, num2=7)
    fetch f2(5, 10);   // Parameterized constructor (num1=5, num2=10)
    fetch f3(f2);      // Copy constructor (copies f2's values)
    
    f1.disp();
    f2.disp();
    f3.disp();
    
    return 0;
}
