//Q.1 . Define a class to represent a bank account. Include the following members:
+//Data Member: -
+//Name of the depositor -
+//Account Number -
+//Type of Account -
+//Balance amount in the account
+//Member Functions -
+//To assign values -
+//To deposited an amount -
+//To withdraw an amount after checking balance -
+//To display name and balance

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    // Member function to assign values
    void assignValues(const std::string& name, int accNumber, const std::string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount " << amount << " deposited successfully." << std::endl;
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Amount " << amount << " withdrawn successfully." << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    // Member function to display name and balance
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount account;

    // Assign values
    account.assignValues("sanket", 123456, "Savings", 1000.00);

    // Display initial details
    std::cout << "Initial Account Details:" << std::endl;
    account.display();

    // Deposit some amount
    account.deposit(500.00);

    // Display details after deposit
    std::cout << "\nAccount Details after Deposit:" << std::endl;
    account.display();

    // Withdraw some amount
    account.withdraw(200.00);

    // Display details after withdrawal
    std::cout << "\nAccount Details after Withdrawal:" << std::endl;
    account.display();

    return 0;
}


