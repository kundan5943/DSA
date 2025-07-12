#include<iostream>
#include<string>
using namespace std;
class user
{
    int id;
    string password;
    public:
    string username;
    
    user(int n)
    {
       id=n;
    }

    void setpassword(string password)
    {
        this->password=password;
    }
    string getpassword()
    {  
    
       return password;
    }

    int getid()
    {
        return id;
    }
};

int main(){
    

    user user1(012);
    user1.username="kundan";
    user user2(021);
    cout<<user2.username<<endl;
    user1.setpassword("#kundan8010");
    cout<<"Username : "<<user1.username<<endl;
    cout<<"User id : "<<user1.getid()<<endl;
   cout<<"User Password : "<<user1.getpassword();
    return 0;
}