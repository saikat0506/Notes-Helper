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
    BankAccount b("PNB23957204", 670000);
    b.display();
    return 0;
}