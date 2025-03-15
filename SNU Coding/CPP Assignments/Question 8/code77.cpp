/*
Create an interface class Drawable with a pure virtual function draw(). Create two classes, Circle and Rectangle, that inherit from Drawable and implement the draw() function to display "Drawing a Circle" and "Drawing a Rectangle," respectively. Write a program to create objects of both Circle and Rectangle classes and call the draw() function for each object. [ Polymorphism with Interface ]
*/

#include <iostream>
using namespace std;

class Drawable
{
public:
    virtual void draw()
    {
        cout << "Shapes are drawing" << endl;
    }
};

class Circle : public Drawable
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Drawable
{
public:
    void draw()
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    Circle circle;
    Rectangle rectangle;
    Drawable *shapes[] = {&circle, &rectangle};

    for (Drawable *shape : shapes)
    {
        shape->draw();
    }

    return 0;
}