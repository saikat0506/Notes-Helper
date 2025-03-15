/*
Create a base class Shape with private attributes length and width. Create a friend class AreaCalculator that can access the private attributes of Shape and calculate the area. Write a program to create an object of the Shape class, set its dimensions, and use the AreaCalculator friend class to calculate and display the area. [ Friend Class ]
*/

#include <iostream>
using namespace std;

class Shape
{
private:
    int length, width, areaR;

public:
    void insert(int l, int w)
    {
        length = l;
        width = w;
    }

    friend Shape AreaCalculator(Shape o1);

    void displayArea(int a)
    {
        areaR = a;
        cout << "The area of the rectangle is: " << areaR << endl;
    }
};

Shape AreaCalculator(Shape o1)
{
    Shape o2;
    o2.displayArea(o1.length *o1.width);
    return o2;
}

int main()
{
    Shape s, areaR;
    int l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cin >> w;

    s.insert(l, w);
    cout << "Enter the width of the rectangle: ";
    areaR = AreaCalculator(s);
    
    return 0;
}