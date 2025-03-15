/*
Create an abstract base class Shape with a pure virtual function area(). Create two derived classes, Circle and Rectangle, from Shape, each implementing the area() function to calculate its specific area. Write a program to create objects of both Circle and Rectangle classes, call the area() function for each, and display their areas.[ Abstract Base Class ]
*/

#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "These are the areas of the shapes, circle and rectangle " << endl;
    }
};

class Circle : public Shape
{
public:
    void area(double radius)
    {
        cout << "The area of the circle is " << PI * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area(double length, double width)
    {
        cout << "The area of the rectangle is " << length * width << endl;
    }
};

int main()
{
    double radius;
    cout << "Enter the radius of the circle:";
    cin >> radius;
    Circle c;
    c.area(radius);

    double length, width;
    cout << "Enter the length of the rectangle:";
    cin >> length;
    cout << "Enter the width of the rectangle:";
    cin >> width;
    Rectangle r;
    r.area(length, width);
}