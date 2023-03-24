#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
         // here we have multiple constructors
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){ //constructor function
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);
    book1.title = "asdfasdf"; //initialize with a different value
    Book book2("Lord of the rings", "Tolkein", 300);
    Book book3;

    cout << book1.title << endl;
    cout << book2.pages << endl;
    cout << book3.title;
    return 0;
}