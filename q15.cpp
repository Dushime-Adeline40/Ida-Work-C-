#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;

public:
    BankAccount(std::string ownerName, double startBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void print() const;
};

BankAccount::BankAccount(std::string ownerName, double startBalance) {
    owner = ownerName;
    balance = startBalance;
}

void BankAccount::deposit(double amount) {
    if (amount <= 0) {
        std::cout << "Deposit must be positive." << std::endl;
        return;
    }
    balance += amount;
    std::cout << owner << " deposited " << amount << std::endl;
}

void BankAccount::withdraw(double amount) {
    if (amount <= 0) {
        std::cout << "Withdrawal must be positive." << std::endl;
        return;
    }
    if (amount > balance) {
        std::cout << owner << ": not enough money to withdraw " << amount << std::endl;
        return;
    }
    balance -= amount;
    std::cout << owner << " withdrew " << amount << std::endl;
}

void BankAccount::print() const {
    std::cout << "Account owner: " << owner << ", balance: " << balance << std::endl;
}

int main() {
    BankAccount a("Ali", 100);
    BankAccount b("Sara", 500);

    a.print();
    b.print();

    a.deposit(50);
    a.withdraw(500);   // refused
    b.withdraw(200);

    a.print();
    b.print();

    return 0;
}