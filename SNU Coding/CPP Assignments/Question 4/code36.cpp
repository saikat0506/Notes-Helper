/*
Create a class BankAccount with attributes accountNumber (string) and balance (double). Implement a parameterized constructor that initializes accountNumber and balance based on user input. Write a program to create an object of the BankAccount class and display the account information.
*/

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string accountNumber;
    double balance;
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
