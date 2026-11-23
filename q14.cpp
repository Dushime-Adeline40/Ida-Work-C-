#include <iostream>
#include <string>
using namespace std;


class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string ownerName, double startBalance) {
        owner = ownerName;
        balance = startBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit must be positive." << endl;
            return;
        }
        balance += amount;
        cout << owner << " deposited " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << owner << ": not enough money to withdraw " << amount << endl;
            return;
        }
        balance -= amount;
        cout << owner << " withdrew " << amount << endl;
    }

    void print() {
        cout << "Account owner: " << owner << ", balance: " << balance << endl;
    }
};

int main() {
    BankAccount a("Ali", 100);
    BankAccount b("Sara", 500);

    a.print();
    b.print();

    cout << endl;
    a.deposit(100);
    a.withdraw(30);
    a.withdraw(500);   
    b.withdraw(200);
    b.deposit(75);

    cout << endl;
    a.print();
    b.print();

    return 0;
}