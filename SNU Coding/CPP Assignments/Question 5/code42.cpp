/*
Create a class BankAccount with a private attribute balance (double). Write a program to create an object of the BankAccount class, attempt to access the balance directly, and display an error message. [ Private Access Specifier ]
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;
public:
    BankAccount(string n, double r)
    {
        accountNumber = n;
        balance = r;
    }
    void display();
};

void BankAccount ::display()
{
    cout << "The Account Number is " << accountNumber << endl;
    cout << "The balance of the bank account is " << balance << endl;
}

int main()
{
    string n;
    double r;
    cout << "Enter the account number: ";
    cin >> n;
    cout << "Enter bank balance: ";
    cin >> r;

    BankAccount b(n, r);
    b.display();
    return 0;
}