/* Create a program to swap two numbers without using a third variable. */

#include <iostream>
using namespace std;

void swap1(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "The value of a and b respectively is " << a << " and " << b;
}

void swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The value of a and b respectively is " << a << " and " << b;
}

int main()
{
    int a, b, n;
    cout << "Enter any two numbers:" << endl;
    cin >> a >> b;
    cout << "Enter 1 for swapping using bitwise operator and enter 2 for normal swapping operation : ";
    cin >> n;

    switch (n)
    {
    case 1:
        swap1(a, b);
        break;
    case 2:
        swap2(a, b);
        break;
    default:
        cout << "Invalid Case";
        break;
    }
    return 0;
}