/* Write a C++ program to find the area of shapes using Function Overloading. [Circle, Rectangle, Square, Cone, Cylinder, Triangle, Sphere, etc] */

#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

void area(float radius)
{
    float area;
    area = PI * radius * radius;
    cout << "Area of the circle is " << area << endl;
}

void area(int length, int width)
{
    int area;
    area = length * width;
    cout << "Area of the rectangle is " << area << endl;
}

void area(int side)
{

    int area;
    area = side * side;
    cout << "Area of the square is " << area << endl;
}

void area(float r, float h)
{
    float area;
    area = PI * r * (r + sqrt((h * h) + (r * r)));
    cout << "Area of the cone is " << area << endl;
}

void area(float radius, double height)
{
    float area;
    area = (2 * PI * radius * height) + (2 * PI * radius * radius);
    cout << "Area of the cylinder is " << area << endl;
}

void area(double base, float ht)
{
    float area;
    area = (base * ht) / 2;
    cout << "Area of the triangle is " << area << endl;
}

void sphere(double rad)
{
    float area;
    area = 4 * PI * rad * rad;
    cout << "Area of the sphere is " << area << endl;
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle:";
    cin >> radius;
    area(radius);
    int length, width;
    cin >> length;
    cout << "Enter the length of the rectangle:";
    cout << "Enter the width of the rectangle:";
    cin >> width;
    area(length, width);
    int side;
    cout << "Enter the side of the square:";
    cin >> side;
    area(side);

    float r, h;
    cout << "Enter the radius of the cone:";
    cin >> r;
    cout << "Enter the height of the cone:";
    cin >> h;
    area(r, h);

    double height;
    cout << "Enter the radius of the cylinder:";
    cin >> radius;
    cout << "Enter the height of the cylinder:";
    cin >> height;
    area(radius, height);

    double base;
    float ht;
    cout << "Enter the base of the triangle:";
    cin >> base;
    cout << "Enter the height of the triangle:";
    cin >> ht;
    area(base, ht);

    double rad;
    cout << "Enter the radius of the sphere:";
    cin >> rad;
    sphere(rad);
    return 0;
}