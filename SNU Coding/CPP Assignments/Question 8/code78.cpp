/*
Create a function template maximum() that can determine the maximum of two values. Write a program to demonstrate polymorphism by using this function template with integers and doubles. [ Function Templates and Polymorphism ]
*/

#include <iostream>
using namespace std;

class number
{
public:
    void maximum(int a, int b)
    {
        if (a > b)
        {
            cout << a << " is greater than " << b << endl;
        }
        else
        {
            cout << b << " is greater than " << a << endl;
        }
    }

    void maximum(double c, double d)
    {
        if (c > d)
        {
            cout << c << " is greater than " << d << endl;
        }
        else
        {
            cout << d << " is greater than " << c << endl;
        }
    }
};

int main()
{
    number n;
    int a, b;
    cout << "Enter two integer type numbers:" << endl;
    cin >> a >> b;

    n.maximum(a, b);
    double c, d;
    cout << "Enter two double type numbers:" << endl;
    cin >> c >> d;
    n.maximum(c, d);

    return 0;
}
