#include "BookList.h"


BookList::BookList(int capacity){
    books = new Book[capacity];
    booksCount = 0;
}

BookList::BookList(const BookList& anotherList)
{
    books = new Book[capacity];
    for(int i=0; i<capacity; i++){
        books[i] = anotherList.books[i];
    }
}


void BookList::addBook(Book book){
    books[booksCount] = book;
    booksCount++;
}

Book& BookList::searchBook(string name){
for(int i=0; i<booksCount; i++){
    if(name == books[i].getTitle()){
        return books[i];
    }
}
}


Book& BookList::searchBook(int id){
for(int i=0; i<booksCount; i++){
    if(id == books[i].getId()){
        return books[i];
    }
}}

void BookList::deleteBook(int id){
int ind ;
for(int i=0; i<booksCount; i++){
     if(id == books[i].getId()){
        ind = i;
    }
}


for(int i=ind; i < booksCount-1; i++){
    books[i] = books[i+1];
}
booksCount--;
}


Book BookList::getTheHighestRatedBook(){
double high = -1;
int indx;
for(int i=0; i<booksCount; i++){
    if(high < books[i].getaverageRating()){
            high = books[i].getaverageRating();
            indx = i;
    }
}
return books[indx];
}

int BookList::numofbooks(User user){
    int all=0;
for(int i=0; i<booksCount; i++){
  if(user == books[i].getAuthor()){
        all++;
  }
}
return all;
}

Book* BookList::getBooksForUser(User user){
for(int i=0; i<booksCount; i++){
  if(user == books[i].getAuthor()){
        return &books[i];
  }
}
}


Book& BookList::operator [](int position){
if(position < 0 && position >= capacity){
    cout<<"error position out of range\n";
}
return books[position];
}

int BookList::getbooksCount(){return booksCount;}

ostream &operator <<( ostream &output, BookList &booklist){
for(int i=0; i<booklist.booksCount; i++){
    output<<booklist.books[i];
    if(booklist.books[i].getAuthor().getName() != ""){
    output<<"\n========author "<<"info========\nName: "<<booklist.books[i].getAuthor().getName()<<"\nAGE: "<<booklist.books[i].getAuthor().getAge()<<"\nID: "<<booklist.books[i].getAuthor().getId()<<"\nEMAIL: "<<booklist.books[i].getAuthor().getEmail()<<"\n";
    output<<"================================\n";
    }
}
return output;
}
BookList::~BookList()
{
}
