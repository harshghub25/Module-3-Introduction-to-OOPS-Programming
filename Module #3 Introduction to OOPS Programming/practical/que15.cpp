#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    // Input Matrix A
    cout << "Enter elements of Matrix A (2x2):\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B (2x2):\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Addition: C = A + B
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display Result
    cout << "\nResultant Matrix C (A + B):\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
