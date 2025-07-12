//square pattern using forloop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"_____________________________________________"<<endl;
    //-------------------------------------------------------
    int a;
    cout<<"enter value : ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int i=0;i<a;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}