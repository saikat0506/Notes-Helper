/*
Create a class Circle with an attribute radius. Implement a parameterized constructor that initializes the radius based on user input. Write a program to create an object of the Circle class and calculate and display its circumference.
*/

#include <iostream>
#define PI 3.14
using namespace std;

class circle
{
public:
    float radius;
    circle(float r)
    {
        radius = r;
        cout << "The radius of the circle is:" << radius << endl;
    }
    void calculation();
    
};

void circle ::calculation()
{
    float circumference, area;
    circumference = 2 * PI * radius;
    cout << "The circumference of the circle is " << circumference << endl;
    area = PI * radius * radius;
    cout << "The area of the circle is " << area << endl;
}

int main()
{
    float r;
    cout << "Enter radius of the circle:";
    cin >> r;
    circle c(r);
    c.calculation();
    return 0;
}