//star pattern (In this triangle pattern 1 and triangle pattern2)
//triangle pattern 1-Right angle triangle 
//Triangle pattern 2-Inverted Right angle triangle 
#include<iostream>
using namespace std;

int main(){
    int n=4;
    cout<<"Right angle triangle(Half pyramid) :"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    cout<<"____________________________________"<<endl;

     cout<<"Half pyramid:"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
     cout<<"____________________________________"<<endl;

cout<<"Inverted Right angle triangle :"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}