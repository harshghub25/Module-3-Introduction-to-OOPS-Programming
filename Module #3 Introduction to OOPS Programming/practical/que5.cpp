#include <iostream>
using namespace std;

int main() {
    // --- IMPLICIT TYPE CONVERSION (Type Promotion) ---
    int intVal = 10;
    double doubleVal = 5.5;

    // int is automatically promoted to double during addition
    double resultImplicit = intVal + doubleVal;

    cout << "Implicit Conversion Example:" << endl;
    cout << "intVal (int) = " << intVal << endl;
    cout << "doubleVal (double) = " << doubleVal << endl;
    cout << "Result (int + double) = " << resultImplicit << " (stored as double)" << endl;

    cout << "-----------------------------------" << endl;

    // --- EXPLICIT TYPE CONVERSION (Type Casting) ---
    double pi = 3.14159;

    // Casting double to int
    int piAsInt = (int)pi;        // C-style cast
    int piAsInt2 = int(pi);       // Function-style cast

    cout << "Explicit Conversion Example:" << endl;
    cout << "Original pi (double) = " << pi << endl;
    cout << "After casting (int) = " << piAsInt << endl;
    cout << "After casting (int, function style) = " << piAsInt2 << endl;

    return 0;
}
