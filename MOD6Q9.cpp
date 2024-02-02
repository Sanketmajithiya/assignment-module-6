/* Q.9  Assume that a bank maintains two kinds of accounts for customer, one called as saving account and
other as current accounts provides Simple interest and withdraw facilities but no cheque book facility.
The current account provides cheque book facility but no interest.
Current account holders should maintain a minimum balance and if the balance falls below this
level a service charges is imposed
Create a class account that stores customer name, account number and type of account.
From this derive classes curr_acc and sav_acct to make them more specific to their
requirements Include necessary member functions in order to achieve the following tasks a.
Accepts deposit from
a customer and update balance.
b. Display the balance.
c. Compute and deposit interest.
d. Permit withdraws and updates the balance.
e. Check for the minimum balance, impose penalty, necessary and update the balance*/

#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    Account(string name, int accNumber, string type) : customerName(name), accountNumber(accNumber), accountType(type), balance(0) {}

    // Function to accept deposit and update balance
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Updated balance: " << balance << endl;
    }

    // Function to display balance
    void displayBalance() {
        cout << "Account Balance: " << balance << endl;
    }

    // Virtual function to compute and deposit interest
    virtual void computeAndDepositInterest() {}

    // Virtual function to permit withdrawal and update balance
    virtual void withdraw(double amount) {}

    // Virtual function to check for minimum balance and impose penalty if necessary
    virtual void checkMinimumBalance() {}
};

class SavingsAccount : public Account {
public:
    // Constructor
    SavingsAccount(string name, int accNumber) : Account(name, accNumber, "Savings") {}

    // Function to compute and deposit interest
    void computeAndDepositInterest() override {
        double interestRate = 0.05; // Assuming a 5% interest rate for savings account
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest computed and deposited. Updated balance: " << balance << endl;
    }

    // Function to permit withdrawal and update balance
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

class CurrentAccount : public Account {
private:
    double minimumBalance;
    double serviceCharge;

public:
    // Constructor
    CurrentAccount(string name, int accNumber, double minBal) : Account(name, accNumber, "Current"), minimumBalance(minBal), serviceCharge(10) {}

    // Function to permit withdrawal and update balance
    void withdraw(double amount) override {
        if (balance - amount >= minimumBalance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
            checkMinimumBalance();
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Function to check for minimum balance and impose penalty if necessary
    void checkMinimumBalance() override {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
            cout << "Minimum balance not maintained. Service charge applied. Updated balance: " << balance << endl;
        }
    }
};

int main() {
    SavingsAccount savings("John Doe", 123456);
    CurrentAccount current("Jane Smith", 654321, 500); // Minimum balance for current account is $500

    savings.deposit(1000);
    savings.computeAndDepositInterest();
    savings.displayBalance();

    current.deposit(800);
    current.displayBalance();
    current.withdraw(600); // Should succeed
    current.withdraw(400); // Should fail due to insufficient balance
    current.displayBalance();

    return 0;
}


