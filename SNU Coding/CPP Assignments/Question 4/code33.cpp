/*
Create a class Book with attributes title (string) and author (string). Implement a parameterized constructor that initializes title and author based on user input. Write a program to create an object of the Book class and display its attributes.
*/

#include <iostream>
using namespace std;

class book
{
public:
    string title, author;
    book(string t, string a)
    {
        title = t;
        author = a;
    }
    void display();
};

void book ::display()
{
    cout << "The title of the book is " << title << endl;
    cout << "The author of the book is " << author << endl;
}

int main()
{
    string t, a;
    cout << "Enter the title of the story: ";
    cin >> t;
    cout << "Enter author name: ";
    cin >> a;
    book b(t, a);
    b.display();
    return 0;
}