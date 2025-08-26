#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input from user
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop → controls number of rows
    for(int i = 1; i <= rows; i++) {
        // Inner loop → prints stars for each row
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  // move to next line after each row
    }

    return 0;
}
