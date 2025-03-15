/*
Create a class Point with attributes x (int) and y (int). Implement a parameterized constructor that initializes x and y based on user input. Write a program to create an object of the Point class and display the point's coordinates.
*/

#include <iostream>
using namespace std;

class point
{
public:
    int x, y;
    point(int x_len, int y_len)
    {
        x = x_len;
        cout << "The distance of the object according to x-axis is: " << x << endl;
        y = y_len;
        cout << "The distance of the object according to y-axis is: " << y << endl;
    }
    void display();
};

void point ::display()
{
    cout << "Mathematically the position of the object is (" << x << ", " << y << ") " << endl;
}

int main()
{
    int x_len, y_len;
    cin >> x_len;
    cout << "The distance according to x-axis is: ";
    cout << "The distance according to y-axis is: ";
    cin >> y_len;
    point p(x_len, y_len);
    p.display();
    return 0;
}