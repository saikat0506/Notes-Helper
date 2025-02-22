#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display();
};

void person ::display()
{
    cout << "The name of the person is " << name << endl;
    cout << "The age of the person is " << age << endl;
}

int main()
{
    person p("Shuvom", 43);
    p.display();
    return 0;
}