/*
Create a class Singleton with a private constructor and a static public member function getInstance() that returns a single instance of the class. Write a program to demonstrate that only one Singleton class instance can be created.[ Encapsulation with Private Constructor ].
*/

#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton &getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void setData(int data)
    {
        this->data = data;
    }

    int getData()
    {
        return data;
    }

private:
    int data;
    Singleton()
    {
        data = 0;
    }

    ~Singleton()
    {
    }

    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};

int main()
{
    Singleton &obj = Singleton::getInstance();

    cout << "Enter an integer to set the data in the Singleton object: ";
    int input;
    cin >> input;

    obj.setData(input);
    cout << "Data in the Singleton object: " << obj.getData() << endl;

    Singleton &obj2 = Singleton::getInstance();
    
    if (&obj == &obj2)
    {
        cout << "Both objects are the same instance, which proves Singleton." << endl;
    }
    else
    {
        cout << "Singleton pattern violated. Different instances were created." << endl;
    }

    return 0;
}