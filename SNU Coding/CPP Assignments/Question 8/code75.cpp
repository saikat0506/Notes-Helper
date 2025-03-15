/*
Create a class Calculator with overloaded functions add() to add two integers and add() to add two doubles. Write a program to demonstrate static polymorphism by calling both versions of the add() function.[ Static Polymorphism (Function Overloading) ]
*/

#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        int result_int = a + b;
        cout << "The result of the integer sum is: " << result_int << endl;
    }

    void add(double a, double b)
    {
        int result_double = a + b;
        cout << "The result of the double sum is: " << result_double << endl;
    }
};

int main()
{
    Calculator cal;
    int a, b;

    cout << "Enter two integer number: " << endl;
    cin >> a >> b;

    cal.add(a, b);
    double c, d;
    cout << "Enter two integer number: " << endl;
    cin >> c >> d;

    cal.add(c, d);

    return 0;
}