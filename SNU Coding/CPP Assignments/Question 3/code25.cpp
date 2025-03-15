/* Create a class called Book with attributes title (string) and author (string). Write a program to create two Book objects, set their attributes, and display their information. */

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
    book b("Macbeth", "William_Shakespeare");
    b.display();
    return 0;
}