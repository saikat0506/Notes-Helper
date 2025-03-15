/*
Create a base class called shape with the following members: [Inheritance]
● A protected member variable name of type string to store the name of the shape.
● A public parameterized constructor that initializes the named member with a single string parameter.
● A public virtual function called area() that returns 0.0 (to be overridden by derived classes).
● Now, create two derived classes, Circle and Rectangle, from the Shape class.

For each derived class, implement the following:
● A constructor that initializes the name and relevant dimensions (e.g., radius for a circle or length and width for a rectangle).
● Override the area() function to calculate and return the area of the respective shape (π * radius^2 for a circle and length * width for a rectangle).
In your main program, create instances of both Circle and Rectangle, set their dimensions, and then display their names and areas.
*/

#include <iostream>
#include <string>
using namespace std;
class Shape
{
protected:
    string name;

public:
    Shape(const string &shapeName) : name(shapeName)
    {
    }
    
    virtual float area()
    {
        return 0.0;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(const string &shapeName, float circleRadius) : Shape(shapeName), radius(circleRadius)
    {
    }

    float area() override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(const string &shapeName, int rectLength, int rectWidth) : Shape(shapeName), length(rectLength), width(rectWidth)
    {
    }

    float area() override
    {
        return length * width;
    }
};

int main()
{
    float circleRadius;
    cout << "Enter the radius of the Circle: ";
    cin >> circleRadius;
    Circle circle("Circle", circleRadius);

    int rectLength, rectWidth;
    cout << "Enter the length of the Rectangle: ";
    cin >> rectLength;
    cout << "Enter the width of the Rectangle: ";
    cin >> rectWidth;
    Rectangle rectangle("Rectangle", rectLength, rectWidth);

    cout << "Shape: " << "Circle" << endl;
    cout << "Area: " << circle.area() << endl;
    cout << "Shape: " << "Rectangle" << endl;
    cout << "Area: " << rectangle.area() << endl;

    return 0;
}