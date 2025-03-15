/*
Create a class MyClass with a private member value. Declare a friend function displayValue() that can access and display the private member. Write a program to create an object of the MyClass class, set the value, and call the friend function to display it.[ Friend Function ]
*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    void insert(int v)
    {
        value = v;
    }
    friend MyClass displayValue(MyClass val);
    void displayValue()
    {
        cout << "The value is: " << value << endl;
    }
};

MyClass displayValue(MyClass val)
{
    MyClass mc;
    mc.insert(val.value);
    return mc;
}

int main()
{
    int v;
    cout << "Enter any value: ";
    cin >> v;
    MyClass m;
    m.insert(v);
    m.displayValue();
    return 0;
}