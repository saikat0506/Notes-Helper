/* Write a program to create a menu driven calculator with basic functions. */

#include <iostream>
using namespace std;

void calculator(int c, int a, int b)
{
    switch (c)
    {
    case 1:
        cout << "The addition result is: " << a + b << endl;
        break;
    case 2:
        break;
        cout << "The subtraction result is: " << a - b << endl;
    case 3:
        cout << "The multiplication result is: " << a * b << endl;
        break;
    case 4:
        cout << "The division result is: " << a / b << endl;
        break;
    case 5:

        cout << "The modulus result is: " << a % b << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
}

void choice(int a, int b)
{
    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for subtraction" << endl;
    cout << "Press 3 for multiplication" << endl;
    cout << "Press 4 for division" << endl;
    cout << "Press 5 for modulus" << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter two values:" << endl;
    cin >> a >> b;
    choice(a, b);
    cout << "Enter your choice:";
    cin >> c;
    calculator(c, a, b);
    return 0;
}