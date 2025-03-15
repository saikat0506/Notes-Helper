/*
Create a base class Shape with a virtual function draw(). Create two derived classes, Circle and Rectangle, from Shape, each implementing the draw() function to display "Drawing a Circle" and "Drawing a Rectangle," respectively. Write a program to create an array of pointers to Shape objects, populate it with instances of Circle and Rectangle, and call the draw() function for each object. [Virtual Functions and Dynamic Binding]
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Draw the shapes" << endl;
    }
};

class Circle : public Shape
{
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape
{
    void draw()
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of shapes: ";
    cin >> n;
    int choice;

    for (int i = 0; i < n; i++)
    {
        cin >> choice;
        cout << "Enter 1 for Circle, 2 for Rectangle: ";
    }

    Shape *shape;

    if (choice == 1)
    {
        Circle c;
        shape = &c;
        shape->draw();
    }
    else if (choice == 2)
    {
        Rectangle r;
        shape = &r;
        shape->draw();
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}