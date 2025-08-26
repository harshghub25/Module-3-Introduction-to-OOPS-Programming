#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

// Function to demonstrate local scope
void showLocal() {
    int localVar = 50;  // Local variable
    cout << "Inside showLocal() - localVar = " << localVar << endl;
    cout << "Inside showLocal() - globalVar = " << globalVar << endl;
}

// Function to demonstrate variable shadowing
void shadowExample() {
    int globalVar = 200;  // Local variable with same name as global
    cout << "Inside shadowExample() - local globalVar = " << globalVar << endl;
    cout << "Inside shadowExample() - actual globalVar = " << ::globalVar << endl; 
    // ::globalVar accesses the global one
}

int main() {
    cout << "In main() - globalVar = " << globalVar << endl;

    showLocal();       // Call function with local variable
    shadowExample();   // Call function with shadowing example

    cout << "Back in main() - globalVar = " << globalVar << endl;

    return 0;
}
