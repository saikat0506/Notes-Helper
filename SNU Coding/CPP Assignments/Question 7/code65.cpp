/*
Create a class Circle with a private attribute radius (double). Implement a public member function getArea() that calculates and returns the area of the circle. Make sure the getArea() function is a const member function. Write a program to create an object of the Circle class, set the radius, and display the area using the getArea() function. [ Encapsulation with Const Member Function ]
*/

#include <iostream>
#define PI 3.14
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle() : radius(0.0) {}

    void setRadius(double r)
    {
        radius = r;
    }

    double getArea() const
    {
        return PI * radius * radius;
    }
};

int main()
{
    Circle c;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    c.setRadius(radius);
    double area = c.getArea();
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}