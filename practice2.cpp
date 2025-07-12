//write a program to show numbers entered by user except mulltiple of 10
#include<iostream>
using namespace std;

int main(){
    int a;
    for(int i=1;i>0;i++)
    {
        cout<<"Enter your value :";
        cin>>a;
        if(a%10==0)
        {
            continue;
        }
        cout<<"You entered value is - "<<a<<endl;
        //This is a infinite loop
    }
    return 0;
}