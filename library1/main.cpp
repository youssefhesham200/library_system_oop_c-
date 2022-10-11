#include <iostream>
#include<User.h>
#include<Book.h>
#include<UserList.h>
#include<BookList.h>
using namespace std;

int main(){
    int mainm,userscap,userchoice,bookscap,bookschoice,id; string name;
    UserList ul(10);
    while(true){
    cout<<"select one of the following choices\n1- Books Menu\n2- Users Menu\n3- Exit\n";
    cin>>mainm;
    if(mainm == 2){
    cout<<"How many users will be added\n";
    cin>>userscap;
     UserList ul(userscap);
    while(true){
    cout<<"Users Menu\n1- create a user and add it to list\n2- search for a user\n3- Display all users\n4- Back to the main menu\n";
    cin>>userchoice;
    if(userchoice == 1){
    User s;
    s.print();
    s.increamtcounter();
    cin>>s;
    ul.addUser(s);
    }
    else if(userchoice == 2){
            int searchcho,searchcho1;
        while(true){
         cout<<"search for a user\n1- search by name\n2- search by id\n3- Return to Users Menu\n";
         cin>>searchcho;
            if(searchcho == 1){
                cout<<"Enter name\n";
                cin>>name;
                User xs = ul.searchUser(name);
                if(xs.getName() != ""){cout<<xs;}
                cout<<"1- Delete user\n 2-Return to Users Menu\n";
                cin>>searchcho1;
                if(searchcho1 = 1){ul.deleteUser(xs.getId()); continue;}
                else{break;}
            }
            else if(searchcho == 2){
                cout<<"enter Id\n";
                cin>>id;
                User xs = ul.searchUser(id);
                if(xs.getName() != ""){cout<<xs;}
                cout<<"1- Delete user\n 2-Return to Users Menu\n";
                cin>>searchcho1;
                if(searchcho1 = 1){ul.deleteUser(id); continue;}
                else{break;}
            }
            else{
                break;
            }}}
    else if(userchoice == 3){
        cout<<ul;
    }
    else{break;}
}}
else if(mainm == 1){
    cout<<"How many books will be added\n";
    cin>>bookscap;
    BookList bl(bookscap);
    while(true){
    cout<<"books Menu\n1- create a book and add it to list\n2- search for a book\n3- Display all books\n4- get the highest rating book\n5- get all book of user\n6- copy the current book list to new book list\n7- back to the main menu\n";
    cin>>bookschoice;
    if(bookschoice == 1){
        int createcho;
        Book b;
        b.printb();
        cin>>b;
        b.increasebook();
        bl.addBook(b);
        while(true){
        cout<<"1- assign author\n2- continue\n";
        cin>>createcho;
        if(createcho == 1){
            cout<<"enter a author (user) id\n";
            cin>>id;
            User xs = ul.searchUser(id);
            if(xs.getName() != ""){bl.searchBook(b.getId()).setAuthor(xs); break;}
            else{continue;}
        }
        else{break;}
    }}
    else if(bookschoice == 2){
        int searchbo,search1co,rate; Book bk;
        cout<<"search for a book\n1- search by name\n2- search by id\n3- Return to books Menu\n";
        cin>>searchbo;
        if(searchbo == 1){
                cout<<"Enter name\n";
                cin>>name;
                if(bl.searchBook(name).getTitle() != ""){cout<<bl.searchBook(name);}
                 bk = bl.searchBook(name);
        }
        else if(searchbo == 2){
            cout<<"Enter id\n";
            cin>>id;
            if(bl.searchBook(id).getTitle() != ""){cout<<bl.searchBook(id);}
             bk = bl.searchBook(id);
        }
        while(true){
            cout<<"1- Update author\n2- Update Name\n3- Update Category\n4- delete book\n5- rate book\n6- get back to books menu\n";
            cin>>search1co;
            if(search1co == 1){
            cout<<"enter a author (user) id\n";
            cin>>id;
            if(ul.searchUser(id).getName() != ""){bl.searchBook(bk.getId()).setAuthor(ul.searchUser(id)); continue;}
            else{continue;}
            }
            else if(search1co == 2){
            cout<<"enter new name\n";
            cin>>name;
            bl.searchBook(bk.getId()).setTitle(name); continue;
            }
            else if(search1co == 3){
            cout<<"enter new category\n";
            cin>>name;
            bl.searchBook(bk.getId()).setCategory(name); continue;
            }
            else if(search1co == 4){
                bl.deleteBook(bk.getId()); continue;
            }
            else if(search1co == 5){
                cout<<"Enter rating value\n";
                cin>>rate;
               bl.searchBook(bk.getTitle()).rateBook(rate); continue;
            }
            else{break;}
        }
    }
    else if(bookschoice == 3){cout<<bl;}
    else if(bookschoice == 4){
         cout<<bl.getTheHighestRatedBook();
    }
    else if(bookschoice == 5){
            cout<<"enter a author (user) id\n";
            cin>>id;
            User xs = ul.searchUser(id);
            if(xs.getName() != ""){
             int bn = bl.numofbooks(xs);
             Book* arr1 = bl.getBooksForUser(xs);
             for(int i=0; i<bn; i++){
                cout<<arr1[i];
             }
             continue;
            }
            else{continue;}
    }
    else if(bookschoice == 6){
        BookList newbooklist(bl);
        cout<<"copied current list( "<<bl.getbooksCount()<<" )books to a new list and switched to it\n";
    }
    else{break;}
}
}
else{break;}
}
}




