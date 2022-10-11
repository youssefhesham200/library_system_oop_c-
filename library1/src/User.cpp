#include "User.h"
#include<iostream>
using namespace std;

// the id must be incremental so i created counter that increment and and assign id to it
User::User()
{
    name = "";
    password = "";
    id = counter;
}

User::User(string NAME, int AGE, string EMAIL, string PASSWORD){
    name = NAME;
    password = PASSWORD;
    age = AGE;
    email = EMAIL;
    id = counter;
}

User::User(const User&user){
name = user.name;
password = user.password;
age = user.age;
email = user.email;
id = user.id;
}

bool User::operator ==(const User&user){
    bool check = false;
if(name == user.name && age == user.age && email == user.email && id == user.id){
    check = true;
}
return check;
}

void User::setName(string Name){name = Name;}
string User::getName() const{return name;}
void User::setPassword(string Password){password = Password;}
string User::getPassword(){return password;}
void User::setEmail(string Email){email = Email;}
string User::getEmail(){return email;}
void User::setAge(int Age){age = Age;}
int User::getAge(){return age;}
void User::setId(int Id){id = Id;}
int User::getId(){return id;}
void User::increamtcounter(){counter++;}

void User::print(){cout<<"Enter the user information in this order\nName Age Email Password (Space separated)\n";}

istream  &operator>>(istream &input, User&user){
input>>user.name>>user.age>>user.email>>user.password;
return input;
}
ostream &operator<<(ostream &output,const User&user){
output<<"\n========User "<<user.id<<" info========\nName: "<<user.name<<"\nAGE: "<<user.age<<"\nID: "<<user.id<<"\nEMAIL: "<<user.email<<"\n";
output<<"================================\n";
return output;
}
int User::counter = 1;

