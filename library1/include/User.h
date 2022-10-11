#ifndef USER_H
#define USER_H
#include<cstring>
#include<iostream>
using namespace std;

class User
{
private:
    int id,age;
    string name,password,email;
public:
    static int counter;
    User();
    User(string NAME, int AGE, string EMAIL, string PASSWORD);//
    User(const User&user);
    bool operator ==(const User& user);//function to check if 2 users equal or not if equal return true if not return false

    //this package setters and getters (email, password, name , age , id) from here ======
    void setName(string Name);
    string getName() const;
    void setPassword(string Password);
    string getPassword();
    void setEmail(string Email);
    string getEmail();
    void setAge(int Age);
    int getAge();
    void setId(int Id);
    int getId();
    void increamtcounter();
    //to here ==========
    void print();//this function for print regular formula

    // for input and output
    friend ostream &operator<<(ostream &output, const User &user );
    friend istream &operator>>( istream &input, User &user );
};

#endif // USER_H
