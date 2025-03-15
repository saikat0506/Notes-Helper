/*
Create a base class Shape with a virtual destructor. Create two derived classes, Circle and Rectangle, from Shape, and implement constructors and destructors in all three classes. Write a program to create objects of Circle and Rectangle, store them in an array of pointers to Shape, and observe the behavior of the destructors when deleting objects through base class pointers. [ Virtual Destructors ]
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "This is base class named Shape constructor which is called" << endl;
    }

    virtual ~Shape()
    {
        cout << "This is base class named Shape destructor which is called" << endl;
    }
};

class Circle : public Shape
{
public:
    Circle()
    {
    }

    ~Circle()
    {
        cout << "This is circle derived class constructor which is called" << endl;
        cout << "This is circle derived class destructor which is called" << endl;
    }
};

class Rectangle : public Shape
{

public:
    Rectangle()
    {
        cout << "This is rectangle derived class constructor which is called" << endl;
    }

    ~Rectangle()
    {
        cout << "This is rectangle derived class destructor which is called" << endl;
    }
};

int main()
{
    cout << "We are in main function now" << endl;
    int n;
    cout << "Enter the number of shapes: ";
    cin >> n;

    Shape *shp[50];

    for (int i = 1; i <= n; i++)
    {
        int choice;
        cout << "Enter 1 for Circle, 2 for Rectangle: ";
        cin >> choice;

        Shape *shape;

        if (choice == 1)

        {
            shape = new Circle();
        }
        else if (choice == 2)
        {
            shape = new Rectangle();
        }
        else
        {
            cout << "Invalid input" << endl;
            shape = new Shape();
        }
        shp[i] = shape;
    }

    cout << "Destructing shapes:" << endl;
    for (int i = 1; i <= n; i++)
    {
        delete shp[i];
    }

    return 0;
}