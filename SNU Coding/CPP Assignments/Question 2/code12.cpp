/* Write a program to check if a given year is a Leap Year. */

#include <iostream>
using namespace std;

void leap_year(int y)
{
    if (y % 4 == 0 || y % 400 == 0)
    {
        cout << y << " is a leap year";
    }
    else
    {
        cout << y << " is not a leap year";
    }
}

int main()
{
    int y;
    cout << "Enter a year:";
    cin >> y;
    leap_year(y);
    return 0;
}