#include<iostream>
using namespace std;

int main(){
    int marks[5]={1,2,3,4,5};
    int *ptr=marks;
    int a =sizeof(marks)/sizeof(int);//this will tell  about how many elements are thre in an array
    for(int i=0;i<=a-1;i++)
    {
        cout<<marks[i]<<" ";

    }
    cout<<endl;
    cout<<"code second - "<<endl;
    int n;
    cout<<"Enter your array size : ";
    cin>>n;
    int marks1[n];
   
    for(int i=0;i<=n-1;i++)
    {
        cin>>marks1[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<marks1[i]<<" ,";
    }
cout<<endl;
cout<<*(marks+1)<<endl;
    return 0;
}