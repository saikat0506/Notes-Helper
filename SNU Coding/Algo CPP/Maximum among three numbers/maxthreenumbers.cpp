#include <iostream>
using namespace std;
class greatest
{
private:
    int x, y, z;

public:
    void insert()
    {
        cout << "Enter three number:" << endl;
        cin >> x >> y >> z;
    }
    void maxnum();
};

void greatest ::maxnum()
{
    if (x > y && x > z)
    {
        cout << "Greatest number is " << x;
    }
    else if (y > x && y > z)
    {
        cout << "Greatest number is " << y;
    }
    else if (z > x && z > y)
    {
        cout << "Greatest number is " << z;
    }
}

int main()
{
    greatest g;
    g.insert();
    g.maxnum();
}