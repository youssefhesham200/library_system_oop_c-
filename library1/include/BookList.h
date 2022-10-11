#ifndef BOOKLIST_H
#define BOOKLIST_H
#include<User.h>
#include<Book.h>

class BookList
{
   private:
       Book* books;
       int capacity;
       int booksCount;
   public:
       BookList(const BookList& anotherList);
       BookList(int capacity);
       void addBook(Book book);
       Book& searchBook(string name);
       Book& searchBook(int id);
       void deleteBook(int id); //delete a book
       Book getTheHighestRatedBook();
       Book* getBooksForUser(User); // get all books of this author
       int numofbooks(User user);
       Book & operator [ ] ( int position);
       int getbooksCount();
       friend ostream &operator<<( ostream &output, BookList &booklist ); //to display all
       ~BookList();
};

#endif // BOOKLIST_H

