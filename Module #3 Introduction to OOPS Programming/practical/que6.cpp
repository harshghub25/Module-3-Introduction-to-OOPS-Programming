#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // --- 1. Arithmetic Operators ---
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (integer division)" << endl;
    cout << "a % b = " << (a % b) << " (remainder)" << endl;

    cout << "-----------------------------------" << endl;

    // --- 2. Relational Operators ---
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "-----------------------------------" << endl;

    // --- 3. Logical Operators ---
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y (AND): " << (x && y) << endl;
    cout << "x || y (OR): " << (x || y) << endl;
    cout << "!x (NOT): " << (!x) << endl;

    cout << "-----------------------------------" << endl;

    // --- 4. Bitwise Operators ---
    cout << "Bitwise Operators (a=10, b=3):" << endl;
    cout << "a & b (AND): " << (a & b) << endl;
    cout << "a | b (OR): " << (a | b) << endl;
    cout << "a ^ b (XOR): " << (a ^ b) << endl;
    cout << "a << 1 (Left shift): " << (a << 1) << endl;
    cout << "a >> 1 (Right shift): " << (a >> 1) << endl;

    return 0;
}
