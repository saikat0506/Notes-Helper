/* Write a program to print the ASCII Value of a character. */

#include <iostream>
using namespace std;

void character_to_ASCII_1(char c)
{
    cout << "It is the 1st process" << endl;
    cout << "ASCII value of " << c << " is: " << int(c) << endl;
}

void character_to_ASCII_2(char c)
{
    int i;
    if (c >= 65 && c <= 90)
    {
        cout << "It is the 2nd process" << endl;
        i = c;
        cout << c << " is a upper case letter" << endl;
        cout << "ASCII value of " << c << " is: " << i << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "It is the 2nd process" << endl;
        i = c;
        cout << c << " is a lower case letter" << endl;
        cout << "ASCII value of " << c << " is: " << i << endl;
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "It is the 2nd process" << endl;
        i = c;
        cout << c << " is a number" << endl;
        cout << "ASCII value of " << c << " is: " << i << endl;
    }
    else
    {
        cout << "It is the 2nd process" << endl;
        i = c;
        cout << c << " is a symbol" << endl;
        cout << "ASCII value of " << c << " is: " << i << endl;
    }
}

int main()
{
    char c;
    cout << "Enter any character:";
    cin >> c;
    character_to_ASCII_1(c);
    character_to_ASCII_2(c);
    return 0;
}