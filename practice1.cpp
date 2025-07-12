//write a program where user can keep entering value till they enter a multiple of 10
#include<iostream>
using namespace std;

int main(){
    int a;
    
    do{ cout<<"Enter your  value :";
        cin>>a;
        cout<<"you entered a value is :"<<a<<endl;
        if(a%10==0)
        {
            break;//when a value comes that divisble 10 then the loop is stops execution.
        }
    }while(1>0);
    return 0;
}