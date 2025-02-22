#include <iostream>
using namespace std;
class car
{
public:
    void start()
    {
        cout << "The car is starting";
    }
    void stop()
    {
        cout << "The car stops";
    }
};

int main()
{
    car c;
    int n;
    cout << "Enter 1 for car start and 0 for car stop:";
    cin >> n;
    switch (n)
    {
    case 1:
        c.start();
        break;
    case 0:
        c.stop();
        break;
    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}