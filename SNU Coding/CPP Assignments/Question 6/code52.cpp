/*
Create two base classes, Shape and Color, with attributes related to shape and color, respectively. Create a derived class ColoredShape that inherits from both Shape and Color. Write a program to create an object of the ColoredShape class, set its attributes, and display them.[ Multiple Inheritance ]
*/

#include <iostream>
using namespace std;

class shape
{
public:
    string shp;
    void insert1(string s)
    {
        shp = s;
    }
};

class color
{

public:
    string clr;
    void insert2(string c)
    {
        clr = c;
    }
};

class ColoredShape : public shape, public color
{
public:
    void display()
    {
        cout << "The name of the shape is: " << shp << endl;
        cout << "The colour of the shape is: " << clr << endl;
    }
};

int main()
{
    string s, c;
    cout << "The name of the shape is: ";
    cin >> s;
    cout << "The colour of the shape is: ";
    cin >> c;
    ColoredShape cs;

    cs.insert1(s);
    cs.insert2(c);
    cs.display();
    
    return 0;
}