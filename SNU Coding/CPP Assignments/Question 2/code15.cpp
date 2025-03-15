/* Write a program to check whether a number is palindrome or not. */

#include <iostream>
using namespace std;

void palindrome(int n)
{
    int original = n;
    int reverse = 0, remainders;
    while (n > 0)
    {
        remainders = n % 10;
        reverse = (10 * reverse) + remainders;
        n = n / 10;
        if (original == reverse)
        {
            cout << original << " is a palindrome number";
        }
        else
        {
            cout << original << " is not a palindrome number";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    palindrome(n);
}