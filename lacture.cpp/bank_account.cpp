#include <iostream>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds" << endl;
        } else {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1234, 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}