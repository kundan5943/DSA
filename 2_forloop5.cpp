//print numbers from n to 1 using for loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value for n :";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
    return 0;
}