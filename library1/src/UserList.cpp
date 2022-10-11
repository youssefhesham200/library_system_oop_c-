#include "UserList.h"

UserList::UserList(int capacity)
{
    users = new User[capacity];
    usersCount =0;
}

void UserList::addUser(User user){
    users[usersCount] = user;
    usersCount++;
}

User& UserList::searchUser(string name){
    int flag = 0;
for(int i=0; i<usersCount; i++){
    if(name == users[i].getName()){
            flag = 1;
       return users[i];
    }
}
if(flag == 0){cout<<"no user found with this name\n";}
}


User& UserList::searchUser(int id){
        int flag = 0;
for(int i=0; i<usersCount; i++){
    if(id == users[i].getId()){
             flag = 1;
        return users[i];
    }
}
if(flag == 0){cout<<"no user found with id =" << id << "\n";}
}


void  UserList::deleteUser(int id){
    int ind ;
for(int i=0; i<usersCount; i++){
     if(id == users[i].getId()){
        ind = i;
    }
}
for(int i=ind; i<usersCount-1; i++){
    users[i] = users[i+1];
}
usersCount--;
}


ostream &operator<<(ostream &output, UserList &userList){
for(int i=0; i<userList.usersCount; i++){
    output<<userList.users[i];
}
return output;
}

UserList::~UserList()
{

}
