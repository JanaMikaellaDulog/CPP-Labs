#include <iostream>
#include <string>
using namespace std;

struct Books{
    string title;
    string author;
    double price;
};

void printBookInfo(Books &book);
void findExpBook(Books book[], int size);

int main(){
    Books *books;
    int size;

    cout << "Enter number of books to input: ";
    cin >> size;

    books = new Books[size];

    for(int i = 0; i < size; i++){
        cout << "Enter Values for Book #" << i + 1 << ": " << endl;
        cout << "Book Title: ";
        getline(cin, books[i].title);
        cout << "Book Author: ";
        getline(cin, books[i].author);
        cout << "Book Price: ";
        cin >> books[i].price;
        cout << endl;
    }

    for(int i = 0; i < size; i++){
        cout << "Book #" << i + 1 << ": " << endl;
        printBookInfo(books[i]);
        cout << endl;
    }

    findExpBook(books, size);

    delete[] books;

    return 0;
}

void printBookInfo(Books &book){
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Price: PHP" << book.price << endl;
}

void findExpBook(Books book[], int size){
    double maxPrice = book[0].price;
    string expBook = book[0].title;
    string expAuthor = book[0].author;
    
    for(int i = 1; i < size; i++){
        if (book[i].price > maxPrice){
            maxPrice = book[i].price;
            expBook = book[i].title;
            expAuthor = book[i].author;
        }
    }

    cout << "The most expensive book is: " << expBook << endl;
    cout << "Author: " << expAuthor << endl;
    cout << "Sellig for PHP: " << maxPrice << endl;

    
}