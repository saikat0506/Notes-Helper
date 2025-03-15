/*
Create a class Time with attributes hours and minutes. Implement a parameterized constructor that initializes hours and minutes based on user input. Write a program to create an object of the time class and display the time.
*/

#include <iostream>
using namespace std;

class times
{
private:
    int second1, second2, minute1, minute2, hour1, hour2;

public:
    times(int s1, int s2, int m1, int m2, int h1, int h2)
    {
        second1 = s1;
        cout << "Your 1st second is:" << second1 << endl;
        second2 = s2;
        cout << "Your 2nd second is:" << second2 << endl;
        minute1 = m1;

        cout << "Your 1st minute is:" << minute1 << endl;
        minute2 = m2;
        cout << "Your 2nd minute is:" << minute2 << endl;
        hour1 = h1;
        cout << "Your 1st hour is:" << hour1 << endl;
        hour2 = h2;
        cout << "Your 2nd hour is:" << hour2 << endl;
    }
    void calculation();
};

void times ::calculation()
{
    int second, minute, hour, second_div, minute_div;
    second = second1 + second2;
    if (second >= 60)
    {
        second_div = second / 60;
        second = second % 60;
    }
    else
    {
        second_div = 0;
    }
    cout << "Second=" << second << endl;
    minute = minute1 + minute2 + second_div;

    if (minute >= 60)
    {
        minute_div = minute / 60;
        minute = minute % 60;
    }
    else
    {
        minute_div = 0;
    }
    cout << "Minute=" << minute << endl;
    hour = hour1 + hour2 + minute_div;
    cout << "Hour=" << hour << endl;
    cout << "The time is " << hour << ":" << minute << ":" << second;
}

int main()
{
    int s1, s2, m1, m2, h1, h2;
    cout << "Enter 1st second: ";
    cin >> s1;
    cout << "Enter 2nd second: ";
    cin >> s2;
    cout << "Enter 1st minute: ";
    cin >> m1;
    cout << "Enter 2nd minute: ";
    cin >> m2;

    cout << "Enter 1st hour: ";
    cin >> h1;
    cout << "Enter 2nd hour: ";
    cin >> h2;
    times t(s1, s2, m1, m2, h1, h2);
    t.calculation();
    return 0;
}