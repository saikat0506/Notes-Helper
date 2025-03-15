/*
Create a class Counter with a private static integer attribute count. Implement public static member functions increment() and decrement() to modify the count attribute. Implement a public static member function getCount() to retrieve the current count. Write a program to demonstrate the use of the Counter class to keep track of the count. [ Encapsulation with Private Static Data ]
*/

#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    static void increment()
    {
        count++;
    }

    static void decrement()
    {
        count--;
    }

    static int getCount()
    {
        return count;
    }
};

// Initialize the static count variable outside the class
int Counter::count = 0;

int main()
{
    cout << "Welcome to the Counter program!" << endl;

    while (true)
    {
        cout << "Current Count: " << Counter::getCount() << endl;
        cout << "1. Increment\n2. Decrement\n3. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Counter::increment();
            break;
        case 2:
            Counter::decrement();
            break;
        case 3:
            cout << "Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}