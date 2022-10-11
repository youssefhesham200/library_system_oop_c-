#ifndef USERLIST_H
#define USERLIST_H
#include<User.h>

class UserList{
    private:
        User* users;
        int capacity;
        int usersCount;
    public:
        UserList(int capacity);
        void addUser(User user); // at the end of the array.
        User& searchUser(string name);
        User& searchUser(int id);
        void deleteUser(int id);
        friend ostream &operator<<(ostream &output, UserList &userList ); //to display all books
        ~UserList();
};

#endif // USERLIST_H
