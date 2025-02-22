#include <iostream>
#define PI 3.14
using namespace std;
class circle
{
public:
    float radius;
    circle(float r)
    {
        radius = r;
        cout << "The radius of the circle is:" << radius << endl;
    }
    void calculation();
};

void circle ::calculation()
{
    float circumference, area;
    circumference = 2 * PI * radius;
    cout << "The circumference of the circle is " << circumference << endl;
    area = PI * radius * radius;
    cout << "The area of the circle is " << area << endl;
}

int main()
{
    circle c(3.8);
    c.calculation();
    return 0;
}