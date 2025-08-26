#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int secretNumber, guess;

    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1;   // random number between 1 and 100

    cout << "Guess the number (between 1 and 100): " << endl;

    // Loop until the correct guess
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "🎉 Congratulations! You guessed the correct number!" << endl;
            break; // exit loop
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Too low! Try again." << endl;
        }
    }

    return 0;
}
