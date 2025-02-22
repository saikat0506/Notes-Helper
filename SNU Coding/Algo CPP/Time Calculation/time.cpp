#include <iostream>
using namespace std;
class times
{
private:
    int s1, s2, m1, m2, h1, h2;

public:
    void insert()
    {
        cout << "Enter 1st second:";
        cin >> s1;
        cout << "Enter 2nd second:";
        cin >> s2;
        cout << "Enter 1st minute:";
        cin >> m1;
        cout << "Enter 2nd minute:";
        cin >> m2;
        cout << "Enter 1st hour:";
        cin >> h1;
        cout << "Enter 2nd hour:";
        cin >> h2;
    }
    void calculation();
};

void times ::calculation()
{
    int second, minute, hour, second_div, minute_div;
    second = s1 + s2;
    if (second >= 60)
    {
        second_div = second / 60;
        second = second % 60;
    }
    cout << "Second=" << second << endl;
    minute = m1 + m2 + second_div;
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
    hour = h1 + h2 + minute_div;
    cout << "Hour=" << hour << endl;
    cout << "The time is " << hour << ":" << minute << ":" << second;
}
int main()
{
    times t;
    t.insert();
    t.calculation();
    return 0;
}