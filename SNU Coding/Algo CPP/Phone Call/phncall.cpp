// PHONE CALLS COST : I) 200RS UPTO 199 CALLS, II) MORE 0.4RS FOR EACH CALL UPTO 399 CALLS, III) MORE 0.8RS FOR MORE THAN 399 CALLS

#include <iostream>
using namespace std;
class charge
{
public:
    int n;
    void insert()
    {
        cout << "Enter the number of phone calls:";
        cin >> n;
    }
    void calc();
};
void charge ::calc()
{
    int r = 200;
    if (n < 200)
    {
        cout << "Your call bill is " << r;
    }
    else if (n >= 200 && n < 400)
    {
        cout << "Your call bill is " << r + (0.4 * n);
    }
    else
    {
        cout << "Your call bill is " << r + (0.8 * n);
    }
}

int main()
{
    charge c;
    c.insert();
    c.calc();
}