#include <iostream>
using namespace std;
class pattern
{
private:
    int n;

public:
    void insert()
    {
        cout << "Enter a number:";
        cin >> n;
    }
    void hollow_square();
};

void pattern ::hollow_square()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    pattern p;
    p.insert();
    p.hollow_square();
}