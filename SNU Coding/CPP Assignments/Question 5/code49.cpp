/*
Create two classes, Rectangle and Circle, with private attributes (length, width, and radius, respectively). Implement a friend function calculateArea() that can access and calculate the areas of both Rectangle and Circle objects. Write a program to create objects of both classes, set their dimensions/radius, and use the friend function to display their areas.
*/

#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Rectangle
{
private:
    int length, width, areaR;

public:
    void insert(int l, int w)
    {
        length = l;
        width = w;
    }
    friend Rectangle calculateArea(Rectangle o1);
    void display()
    {
        cout << "The lenght of the Rectangle is: " << length << endl;
        cout << "The width of the Rectangle is: " << width << endl;
    }
    void displayArea(int a)
    {
        areaR = a;
        cout << "The area of the rectangle is: " << areaR << endl;
    }
};

Rectangle calculateArea(Rectangle o1)
{
    Rectangle o2;
    o2.displayArea(o1.length * o1.width);
    return o2;
}

class Circle
{
private:
    float radius, areaC;

public:
    void insert(float rad)
    {
        radius = rad;
    }
    friend Circle calculateArea(Circle o1);
    void display()
    {
        cout << "The radius of the circle is: " << radius << endl;
    }

    void displayArea(float a)
    {
        areaC = a;
        cout << "The area of the circle is: " << areaC << endl;
    }
};

Circle calculateArea(Circle o1)
{
    Circle o2;
    o2.displayArea(PI * pow(o1.radius, 2));
    return o2;
}

int main()
{
    Rectangle r, areaR;

    int l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    r.insert(l, w);
    r.display();
    areaR = calculateArea(r);

    Circle c, areaC;
    float rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    c.insert(rad);
    c.display();
    areaC = calculateArea(c);
    return 0;
}