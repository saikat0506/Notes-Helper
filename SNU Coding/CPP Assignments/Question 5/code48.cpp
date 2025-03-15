/*
Create a class Complex to represent complex numbers with private attributes real (double) and imaginary (double). Implement a friend function addComplex that takes two Complex objects as arguments and adds them together to create a new Complex object representing their sum. Write a program to create two Complex objects, set their real and imaginary parts, use the friend function to add them, and display the result.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imaginary;

public:
    void setValue(double a, double b)
    {
        real = a;
        imaginary = b;
    }

    friend Complex addComplex(Complex o1, Complex o2);

    void display()
    {
        cout << "The number is " << real << "+" << imaginary << "i" << endl;
    }
};

Complex addComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setValue((o1.real + o2.real), (o1.imaginary + o2.imaginary));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    double a, b;
    cout << "Enter 1st real value: ";
    cin >> a;
    cin >> b;
    cout << "Enter 1st imaginary value: ";
    c1.setValue(a, b);
    c1.display();
    cout << "Enter 2nd real value: ";
    cin >> a;
    cout << "Enter 2nd imaginary value: ";
    cin >> b;
    c2.setValue(a, b);

    c2.display();
    sum = addComplex(c1, c2);
    sum.display();
    return 0;
}