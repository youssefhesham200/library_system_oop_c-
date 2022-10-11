#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include "User.h"
using namespace std;
class Book {
private:
    string title,isbn,category;
    int id;
    int sum;
    double averageRating;
    User author;
public:
    static int countbook;
    static double countrating;
    Book();
    Book(string Title, string Isbn, string Category);
    Book(const Book& book);
    void setTitle(string title);
    string getTitle();
    void setISBN(string isbn);
    string getISBN();
    void setId(int id);
    int getId();
    void setCategory(string category);
    string getCategory();
    void setAuthor(User user);
    User getAuthor();
    double getaverageRating();
    void rateBook(int rating);
    void increasebook();
    bool operator ==(const Book& book);
    void printb();//this function for print regular formula
    friend ostream &operator<<(ostream &output,const Book &book );
    friend istream &operator>>( istream &input, Book &book );
};
#endif // BOOK_H
