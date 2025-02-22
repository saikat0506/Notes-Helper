#include <iostream>
using namespace std;
class rectrangle
{
private:
    int length, width, perimeter, area;

public:
    int insert()
    {
        cout << "Enter length of the rectrangle:";
        cin >> length;
        cout << "Enter width of the rectrangle:";
        cin >> width;
    }
    void cal();
};

void rectrangle ::cal()
{
    perimeter = 2 * (length + width);
    cout << "The perimeter of the rectrangle is " << perimeter << endl;
    area = length * width;
    cout << "The area of the rectrangle is " << area << endl;
}

class square
{
private:
    int side, perimeter, area;

public:
    int insert()
    {
        cout << "Enter side of the square:";
        cin >> side;
    }
    void calc();
};

void square ::calc()
{
    perimeter = 4 * side;
    cout << "The perimeter of the square is " << perimeter << endl;
    area = side * side;
    cout << "The area of the square is " << area << endl;
}

int main()
{
    int ch;
    cout << "Enter 1 for rectrangle calculation and Enter 2 for square calculation : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        rectrangle r;
        r.insert();
        r.cal();
        break;
    case 2:
        square s;
        s.insert();
        s.calc();
        break;
    default:
        cout << "Invalid case";
        break;
    }
    return 0;
}