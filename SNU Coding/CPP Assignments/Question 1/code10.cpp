/* Write a program to Generate Characters from ASCII Values. */

#include <iostream>
using namespace std;

void character_to_ASCII_1(int n)
{
    cout << "It is the 1st process" << endl;
    cout << "The character of the given ASCII value is " << char(n) << endl;
}

void character_to_ASCII_2(int n)
{
    char i;
    if (65 <= n && 90 >= n)
    {
        cout << "It is the 2nd process" << endl;
        i = n;
        cout << "The character of the given ASCII value is " << i << endl;
        cout << i << " is a upper case letter" << endl;
    }
    else if (97 <= n && 122 >= n)
    {
        cout << "It is the 2nd process" << endl;
        i = n;
        cout << "The character of the given ASCII value is " << i << endl;
        cout << i << " is a lower case letter" << endl;
    }
    else if (48 <= n && 57 >= n)
    {
        cout << "It is the 2nd process" << endl;
        i = n;
        cout << "The character of the given ASCII value is " << i << endl;
        cout << i << " is a number" << endl;
    }
    else
    {
        cout << "It is the 2nd process" << endl;
        i = n;
        cout << "The character of the given ASCII value is " << i << endl;
        cout << i << " is a symbol" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter any ASCII number:";
    cin >> n;
    character_to_ASCII_1(n);
    character_to_ASCII_2(n);
    return 0;
}