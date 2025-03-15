/*
Create a class Rectangle with attributes length and width. Implement a parameterized constructor that initializes length and width based on user input. Write a program to create an object of the Rectangle class and calculate and display its area.
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
        cout << "The length of the rectrangle is:" << length << endl;
        width = w;
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