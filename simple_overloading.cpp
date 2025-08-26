// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class fetch {
    int num = 3;   // default value
    
public:
    // Default constructor
    fetch() {
    }
    
    // Parameterized constructor
    fetch(int x) {
        num = x;
    }
    
    // Display function
    void disp() {
        cout << "Number is " << num << endl;
    }
};

int main() {
    fetch f1;        // Default constructor (num = 3)
    fetch f2(5);     // Parameterized constructor (num = 5)
    fetch f3(f1);    // Copy constructor (copies f1's value)
    
    f1.disp();
    f2.disp();
    f3.disp();
    
    return 0;
}

/*
Number is 3
Number is 5
Number is 3

*/
