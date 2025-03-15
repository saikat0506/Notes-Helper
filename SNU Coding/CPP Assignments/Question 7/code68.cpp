/*
Create a class Date with private const data members day, month, and year. Implement public getter member functions for each data member. Write a program to create an object of the Date class, set the date, and display it using the getter functions. [ Encapsulation with Const Data Member ]
*/

#include <iostream>
using namespace std;

class Date
{
private:
    const int day;
    const int month;
    const int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    
    int getDay() const
    {
        return day;
    }

    int getMonth() const
    {
        return month;
    }

    int getYear() const
    {
        return year;
    }
};

int main()
{
    int d, m, y;
    cout << "Enter the day: ";
    cin >> d;
    cout << "Enter the month: ";
    cin >> m;
    cout << "Enter the year: ";
    cin >> y;

    Date dt(d, m, y);
    cout << "The date is " << dt.getDay() << " : " << dt.getMonth() << " : " << dt.getYear() << endl;

    return 0;
}