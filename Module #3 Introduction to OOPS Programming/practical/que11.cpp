#include<iostream>
using namespace std;

// Function Prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2) << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function Definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;  // Type casting for float division
}
