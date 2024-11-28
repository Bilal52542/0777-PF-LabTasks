#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;
    string transactionHistory[10];
    int transactionCount;

public:
    Account(int accountNumber, string accountHolderName, double initialBalance)
        : accountNumber(accountNumber), accountHolderName(accountHolderName), balance(initialBalance), transactionCount(0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            if (transactionCount < 10) {
                transactionHistory[transactionCount++] = "Deposited: $" + to_string(amount);
            }
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            if (transactionCount < 10) {
                transactionHistory[transactionCount++] = "Withdrew: $" + to_string(amount);
            }
        } else {
            cout << "Insufficient balance or invalid withdrawal amount!" << endl;
        }
    }

    void displayDetails() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Transaction History: " << endl;
        for (int i = 0; i < transactionCount; i++) {
            cout << transactionHistory[i] << endl;
        }
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accountNumber, string accountHolderName, double initialBalance, double interestRate)
        : Account(accountNumber, accountHolderName, initialBalance), interestRate(interestRate) {}

    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        deposit(interest);
    }

    void displayDetails() const {
        Account::displayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accountNumber, string accountHolderName, double initialBalance, double overdraftLimit)
        : Account(accountNumber, accountHolderName, initialBalance), overdraftLimit(overdraftLimit) {}

    void withdraw(double amount) {
        if (amount > 0 && (balance + overdraftLimit) >= amount) {
            balance -= amount;
            if (transactionCount < 10) {
                transactionHistory[transactionCount++] = "Withdrew: $" + to_string(amount);
            }
        } else {
            cout << "Overdraft limit exceeded or invalid withdrawal amount!" << endl;
        }
    }

    void displayDetails() const {
        Account::displayDetails();
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount savingsAccount(101, "John Doe", 1000.0, 5.0);
    savingsAccount.deposit(500.0);
    savingsAccount.withdraw(200.0);
    savingsAccount.calculateInterest();

    CurrentAccount currentAccount(102, "Alice Smith", 2000.0, 500.0);
    currentAccount.deposit(300.0);
    currentAccount.withdraw(2500.0);
    cout << "\nSavings Account Details:" << endl;
    savingsAccount.displayDetails();
    cout << "\nCurrent Account Details:" << endl;
    currentAccount.displayDetails();

    return 0;
}

