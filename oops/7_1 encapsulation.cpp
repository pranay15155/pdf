#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // Hidden data

public:
    BankAccount(double initialBalance) { balance = initialBalance; }

    void deposit(double amount) { balance += amount; }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    double getBalance() { return balance; } // Controlled access
};

int main()
{
    BankAccount myAccount(1000);
    myAccount.deposit(500);
    myAccount.withdraw(200);
    cout << "Current Balance: " << myAccount.getBalance() << endl;
    return 0;
}
