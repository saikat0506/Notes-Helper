/*
Create a class Calculator with a private attribute result (double). Implement a private member function calculate() to perform calculations and update the result. Implement public member functions add(), subtract(), multiply(), and divide() that call the calculate() function. Write a program to perform arithmetic operations using the Calculator class and display the result. [ Encapsulation with Private Member Function ]
*/

#include <iostream>
using namespace std;

class Calculator
{
    double result;

private:
    void calculate()
    {
    }

public:
    Calculator() : result(0) {}

    void add(double num1, double num2)
    {

        result = num1 + num2;
        calculate();
    }

    void subtract(double num1, double num2)
    {
        result = num1 - num2;
        calculate();
    }

    void multiply(double num1, double num2)
    {
        result = num1 * num2;
        calculate();
    }

    void divide(double num1, double num2)
    {
        result = num1 / num2;
        calculate();
    }

    double getResult()
    {
        return result;
    }
};

int main()
{
    double num1, num2;
    cout << "Enter 1st number:";
    cin >> num1;
    cout << "Enter 2nd number:";
    cin >> num2;

    Calculator c;
    c.add(num1, num2);
    c.subtract(num1, num2);
    c.multiply(num1, num2);
    c.divide(num1, num2);
    cout << "The updated result is: " << c.getResult() << endl;

    return 0;
}