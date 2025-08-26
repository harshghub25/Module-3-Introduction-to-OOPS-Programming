#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // data member (private → hidden)

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }

    // Getter function (read balance safely)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(1000);  // create account with initial balance 1000

    acc.deposit(500);       // add money
    acc.withdraw(200);      // subtract money
    acc.withdraw(2000);     // trying invalid withdrawal

    cout << "Final Balance: " << acc.getBalance() << endl;

    return 0;
}
