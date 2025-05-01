#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day, month, year;
};

struct Books {
    string title;
    string author;
    Date published;
};


void printBookInfo(Books &book);

int main(){

    Books *books;
    int size;

    cout << "Enter number of books to input: ";
    cin >> size;

    books = new Books[size];

    for(int i = 0; i < size; i++){
        cout << "Enter Values for Book #" << i + 1 << ": " << endl;
        cin.ignore();
        cout << "Book Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Date Published: " << endl;
        cout << "Day: ";
        cin >> books[i].published.day;
        cout << "Month: ";
        cin >> books[i].published.month;
        cout << "Year: ";
        cin >> books[i].published.year;
        cout << endl;
    }

    for(int i = 0; i < size; i++){
        cout << "Book #" << i + 1 << ": " << endl;
        printBookInfo(books[i]);
        cout << endl;
    }


    return 0;
}


void printBookInfo(Books &book){
    cout << "Title           : " << book.title << endl;
    cout << "Author          : " << book.author << endl;
    cout << "Date Published  : " << book.published.day << "/" 
    << book.published.month << "/" << book.published.year << endl;
}