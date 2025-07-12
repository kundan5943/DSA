//check if a number is prime or not
#include<iostream>
using namespace std;

int main(){
    
    int n;
    bool isprime=true;

    cout<<"enter your value : ";
    cin>>n;
    for(int i =2;i<n-1;i++)
    {
        if (n%i==0)
        {
            isprime=false;
            break;

        }

    }
    if(isprime==true)
    {
        cout<<"Number is prime"<<endl;
    }
    else
    {
        cout<<"Number is not prime"<<endl;
    }
    return 0;
}