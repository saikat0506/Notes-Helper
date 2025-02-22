#include <iostream>
using namespace std;
class series
{
private:
    int n;

public:
    void insert()
    {
        cout << "Enter a value:";
        cin >> n;
    }
    int sum();
    void display();
};

int series ::sum()
{
    if (n % 2 == 0)
    {
        return ((-1) * (n / 2));
    }
    return ((n + 1) / 2);
}

void series ::display()
{
    cout << "The series is: ";
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            cout << (-1) * n;
            n--;
        }
        else
        {
            cout << "+" << n;
            n--;
        }
    }
    cout << endl;
}

int main()
{
    series s;
    s.insert();
    cout << "The sum of the series is " << s.sum() << endl;
    s.display();
    return 0;
}