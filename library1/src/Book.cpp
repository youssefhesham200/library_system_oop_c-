#include "Book.h"

Book::Book()
{
    title = "";
    isbn = "";
    id = countbook;
    averageRating = 0;
    sum=0;
}

Book::Book(string Title, string Isbn, string Category){
title = Title;
isbn = Isbn;
category = Category;
id = countbook;
}
void Book::printb(){cout<<"Enter the Book information in this order\nTitle ISBN Category(Space separated)\n";}

Book::Book(const Book& book){
isbn = book.isbn;
title = book.title;
category = book.category;
id = book.id;
}

void Book::setTitle(string Title){title = Title;}
string Book::getTitle(){return title;}
void Book::setISBN(string Isbn){isbn = Isbn;}
string Book::getISBN(){return isbn;}
void Book::setId(int Id){id = Id;}
int Book::getId(){return id;}
void Book::setCategory(string Category){category = Category;}
string Book::getCategory(){return category;}

void Book::setAuthor(User user){
author = user;
}

User Book::getAuthor(){
return author;
}

void Book::rateBook(int rating){
countrating++;
sum += rating;
averageRating = sum / countrating;
}

double Book::getaverageRating(){
return averageRating;
}
bool Book::operator ==(const Book& book){
    bool check = false;
if(title == book.title && isbn == book.isbn && category == book.category && author == book.author && id == book.id){
    check = true;
}
return check;
}

void Book::increasebook(){countbook++;}

istream &operator >>(istream &input, Book &book){
input>>book.title>>book.isbn>>book.category;
return input;
}

ostream &operator<<(ostream &output,const Book&book){
output<<"\n========Book "<<book.id<<" info========\nTitle: "<<book.title<<"\nISBN: "<<book.isbn<<"\nID: "<<book.id<<"\nCategory: "<<book.category<<"\nAVG Rating: "<<book.averageRating<<"\n";
if(book.author.getName() != ""){output<<"author : "<<book.author.getName()<<"\n";}
output<<"================================\n";
return output;
}

int Book::countbook =1;
double Book::countrating = 0;

