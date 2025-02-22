#include <iostream>
using namespace std;
class week
{
public:
    int insert()
    {
        int ch;
        cout << "Insert your choice:";
        cin >> ch;
    }
    int calculation()
    {
        int ch;
        switch (ch)
        {
        case 1:
            cout << "Today is Monday";
            break;
        case 2:
            cout << "Today is Tuesday";
            break;
        case 3:
            cout << "Today is Wednesday";
            break;
        case 4:
            cout << "Today is Thursday";
            break;
        case 5:
            cout << "Today is Friday";
            break;
        case 6:
            cout << "Today is Saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default:
            cout << "Invalid input";
            break;
        }
    }
};

int main()
{
    week w;
    w.insert();
    w.calculation();
}