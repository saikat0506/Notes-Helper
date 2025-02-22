#include <iostream>
using namespace std;
class palindrome
{
public:
    int org, rev, rem, n;
    void insert()
    {
        cout << "Enter a number:";
        cin >> n;
        org = n;
    }

    void palindrom_calculation()
    {
        rem, rev = 0;
        while (n > 0)
        {
            rem = n % 10;
            rev = (rev * 10) + rem;
            n = n / 10;
        }
    }

    void reverse();
};

void palindrome ::reverse()
{
    if (org == rev)
    {
        cout << "The number is palindrome";
    }
    else
    {
        cout << "The number is not palindrome";
    }
}

int main()
{
    palindrome p;
    p.insert();
    p.palindrom_calculation();
    p.reverse();
    return 0;
}