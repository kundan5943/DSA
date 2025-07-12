//pass by reference with refrence variable
#include<iostream>
using namespace std;
void changeA(int &x)
{
    x=25;
    cout<<x<<endl;
    
}

int main(){
    int a=12;
    int &b=a;//here simply b address is equal to a so that any changes perform by b it also show in a
    b=70;

    cout<<a<<endl;
     cout<<b<<endl;
     changeA(a);
      cout<<a<<endl;
    return 0;
}