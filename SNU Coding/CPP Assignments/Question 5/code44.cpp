/*
Create a class Rectangle with private attributes length and width. Write public member functions to set the dimensions and calculate the area. Write a program to create an object of the Rectangle class, set its dimensions, and calculate and display the area.
*/

#include <iostream>
using namespace std;

class rectrangle
{
public:
    int length, width;
    rectrangle(int l, int w)
    {
        length = l;
        width = w;
        cout << "The length of the rectrangle is:" << length << endl;
        cout << "The width of the rectrangle is:" << width << endl;
    }
    void calculation();
};

void rectrangle ::calculation()
{
    int perimeter, area;
    perimeter = 2 * (length + width);
    cout << "The perimeter of the rectrangle is " << perimeter << endl;
    area = length * width;
    cout << "The area of the rectrangle is " << area << endl;
}

int main()
{
    int l, w;
    cout << "Enter the length of the rectangle:";
    cin >> l;
    cout << "Enter the width of the rectangle:";
    cin >> w;
    rectrangle r(l, w);
    r.calculation();
    return 0;
}