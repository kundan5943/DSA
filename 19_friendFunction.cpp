#include<iostream>
#include<string>
using namespace std;
class A
{
      string secret="keysecret";
      friend class B;
};
class B 
{
    public:
    void secret(A &obj)
    {
         cout<<obj.secret<<endl;
    }
};
int main(){
    A a1;
    B b1;
    b1.secret(a1);
    return 0;
}