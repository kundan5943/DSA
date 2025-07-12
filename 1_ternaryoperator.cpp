#include<iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
     isadult =age>=18 ? true:false;
    cout<<"isadult or not - "<<isadult<<endl;
    //----------------------------------------
    int a,b;
    cout<<"enter value for a"<<endl;
    cin>>a;
    cout<<"enter the value for b"<<endl;
    cin>>b;
    int largest= a>=b ? a: b;
    cout<<"largest value is "<<largest<<endl;
    /*------------------------------------------------------*/
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    bool iseven=num%2==0 ? true:false;
    cout<<"it is even or not-"<<iseven<<endl;//if it shows 1 then true if its shows 0 then false
    return 0;
}