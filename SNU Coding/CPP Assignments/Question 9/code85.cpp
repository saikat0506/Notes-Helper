/*
Create a class Date with private const data members day, month, and year. Implement public getter member functions for each data member. Write a program to create an object of the Date class, set the date, and display it using the getter functions.
*/

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
};

int main()
{
    Date myDate;
    int inputDay, inputMonth, inputYear;
    cout << "Enter day: ";
    cin >> inputDay;
    cout << "Enter month: ";
    cin >> inputMonth;
    cout << "Enter year: ";
    cin >> inputYear;

    myDate.setDate(inputDay, inputMonth, inputYear);
    cout << "Date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << endl;
    return 0;
}