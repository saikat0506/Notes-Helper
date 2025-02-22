#include <iostream>
using namespace std;
class employee
{
public:
    string name, department;
    int id, salary;
    void insert(string n, string d, int i, int s)
    {
        name = n;
        department = d;
        id = i;
        salary = s;
    }
    void display();
};

void employee ::display()
{
    cout << "The name of the employee is " << name << endl;
    cout << "The department of the employee is " << department << endl;
    cout << "The id of the employee is " << id << endl;
    cout << "The salary of the employee is " << salary << endl;
}

int main()
{
    employee e;
    e.insert("Shuvom Dhar", "Software Engineer", 1043, 50000);
    e.display();
    return 0;
}