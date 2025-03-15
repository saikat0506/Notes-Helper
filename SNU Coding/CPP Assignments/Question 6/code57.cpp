/*
Create an abstract base class Shape with a pure virtual function area(). Create two derived classes, Circle and Rectangle, from Shape, each implementing the area() function to calculate its specific area. Write a program to create objects of both Circle and Rectangle classes, call the area() function for each, and display their areas.[ Abstract Base Class ]
*/

#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
    virtual void area()
    {
        cout << "The area of circle and rectangle are following:-" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
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
private:
    int length, width;

public:
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
    int l, w;

    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    Circle c;
    c.insert(r);
    c.area();
    Rectangle rec;
    rec.insert(l, w);
    rec.area();

    return 0;
}