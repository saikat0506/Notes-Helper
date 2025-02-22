#include <iostream>
using namespace std;
class rectrangle
{
public:
    int length, width;
    rectrangle(int l, int w)
    {
        length = l;
        cout << "The length of the rectrangle is:" << length << endl;
        width = w;
        cout << "The width of the rectrangle is:" << width << endl;
    }
    void calculation();
};

void rectrangle ::calculation()
{
    int perimeter, area;
    perimeter = 2 * (length + width);
    cout << "The perimeter of the rectrangle is " << perimeter << endl;
    area = length * width;
    cout << "The area of the rectrangle is " << area << endl;
}

int main()
{
    rectrangle r(30, 20);
    r.calculation();
    return 0;
}