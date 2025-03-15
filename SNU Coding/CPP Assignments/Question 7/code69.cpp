/*
Create a class Book with private attributes title (string) and author (string). Implement a parameterized constructor to initialize these attributes. Implement public member functions getTitle() and getAuthor() to retrieve the book information. Write a program to create an object of the Book class and display its title and author. [ Encapsulation with Constructor Initialization ]
*/

#include <iostream>
using namespace std;

class Book
{
private:
    string title, author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    void getTitle()
    {
        cout << "The title of the book is: " << title << endl;
    }

    void getAuthor()
    {
        cout << "The name of the author of the book is: " << author << endl;
    }
};

int main()
{
    string t, a;
    cout << "Enter the title of the story: ";
    cin >> t;
    cout << "Enter author name: ";
    cin >> a;

    Book b(t, a);
    b.getTitle();
    b.getAuthor();
    
    return 0;
}