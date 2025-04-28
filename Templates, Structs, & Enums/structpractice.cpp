#include <iostream>
using namespace std;

struct Book{
    string title;
    string author;
    int pubYr;
    double price;
};

void printBookInfo(Book &book);

int main(){
    Book books[3] = {
                    {"Twilight: New Moon", "Stephanie Meyer", 2007, 650.00},
                    {"Seven Husbands of Evelyn Hugo", "Taylor Jenkins Reid", 2017, 500.00}
                };

    for(int i = 0; i < 3; i++){
        cout << "Book #" << i + 1 << ": " << endl;
        printBookInfo(books[i]);
        cout << endl;
    }                

    return 0;
}

void printBookInfo(Book &book){
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publication Year: " << book.pubYr << endl;
    cout << "Price: PHP" << book.price << endl;

}