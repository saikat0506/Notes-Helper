/*
Create a class BankAccount with private attributes accountNumber (string) and balance (double). Implement public member functions deposit() and withdraw() to update the balance. Ensure that withdraw() does not allow withdrawing more than the available balance. Write a program to create an object of the BankAccount class, perform deposits and withdrawals, and display the balance. [ Encapsulation with Access Specifiers ]
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance = 0;

public:
    void set(string account)
    {
        accountNumber = account;
    }

    void deposit(double crdt)
    {
        double credited = crdt;
        cout << "Your bank account " << accountNumber << " has credited " << credited << " ruppes." << endl;
        balance = balance + credited;
    }

    void withdraw(double dbtd)
    {
        double debited = dbtd;

        if (debited > balance)
        {
            cout << "You can't debited " << debited << " ruppes, your bank account has not that money !!" << endl;
        }
        else
        {
            balance = balance - debited;
        }
    }

    void display()
    {
        cout << "Your available balance in your account " << accountNumber << " is : " << balance << " ruppes." << endl;
    }
};

int main()
{
    BankAccount ba;
    double crdt, dbtd;
    string account;
    cout << "Enter bank account number: ";

    cin >> account;
    ba.set(account);
    cout << "Credited ruppes in your bank account: ";
    cin >> crdt;
    ba.deposit(crdt);
    ba.display();
    cout << "Debited ruppes in your bank account: ";
    cin >> dbtd;
    ba.withdraw(dbtd);
    ba.display();

    return 0;
}