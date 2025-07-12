//2D dynamic Array
#include<iostream>
using namespace std;

int main(){
    int row;
    int colm;
    cout<<"enter row "<<" ";
    cin>>row;
   
    cout<<"enter coulmn"<<" ";
    cin>>colm;

    int* *matrics=new int*[row];
    for(int i=0;i<row;i++)
    {
        matrics[i]=new int[colm];
    }
    
    int x=1;
    for(int i=0;i<row;i++)//data store
   {
    for(int j=0;j<colm;j++)
    {
       matrics[i][j]=x++;
       cout<<matrics[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}