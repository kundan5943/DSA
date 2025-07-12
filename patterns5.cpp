//Hollow reactangle
#include<iostream>
using namespace std;

int main(){
    int n=4;
    
    cout<<"A Hollow Reactangle :"<<endl;
    for(int i =1; i<=4;i++)
    {   cout<<"*";//first * of row
        for(int j=1;j<=n-1;j++) 
        {
            if(i==1||i==n)
            {//if the row is first or last then cout<<"*";
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"*";//last * of a row
        cout<<endl;
    }
    return 0;
}