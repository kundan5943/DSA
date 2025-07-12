#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your n : ";
    cin>>n;
    int sum=0;
    cout<<"1 to n natural number are- "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of first n natural number is - "<<sum<<endl;
    return 0;
}