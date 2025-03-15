/*
Create a base class Shape with a virtual function area(). Create two derived classes, Circle and Rectangle, from Shape, each overriding the area() function to calculate its specific area. Write a program to create objects of both Circle and Rectangle classes, call the area() function for each, and display their areas. [Function Overriding]
*/

#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "The area of circle and rectangle are following:-" << endl;
    }
};

class Circle : public Shape
{
public:
    float radius;

    void insert(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "The area of the circle is: " << PI * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    int length, width;

    void insert(int l, int w)
    {
        length = l;
        width = w;
    }
    
    void area()
    {
        cout << "The area of the rectangle is: " << length * width << endl;
    }
};

int main()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Shape *shape_pointer;
    Shape s;
    Circle c;
    c.insert(r);
    shape_pointer = &c;
    shape_pointer->area();

    int l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    Rectangle rec;
    rec.insert(l, w);
    shape_pointer = &rec;
    shape_pointer->area();

    return 0;
}