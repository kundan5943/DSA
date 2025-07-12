//triangle pattern 
// left angle triangle
//Inverted left angle triangle
#include<iostream>
using namespace std;

int main(){
    int n=4;
    cout<<"left angle triangle :"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j =4;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //-------------------------------------------
    cout<<"Inverted left angle triangle:"<<endl;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=4;k>=i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}