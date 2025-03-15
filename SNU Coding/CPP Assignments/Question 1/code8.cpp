/* Write a program to calculate the area and perimeter of a rectangle. */

#include <iostream>
using namespace std;

void rectrangle(int length, int width)
{
    int area = length * width;
    cout << "The area of the rectrangle is " << area << endl;
    int perimeter = 2 * (length + width);
    cout << "The perimeter of the rectrangle is " << perimeter << endl;
}

int main()
{
    int length, width;
    cout << "Enter the length of the rectrangle:";
    cin >> length;
    cout << "Enter the width of the rectrangle:";
    cin >> width;
    rectrangle(length, width);
    return 0;
}