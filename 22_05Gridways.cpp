#include<iostream>
using namespace std;
int Gridways(int row,int col,int n,int m)
{
    if (row==n-1 && col==m-1)
    {
        return 1; 
    }
    if (row>=n || col >=m)
    {
        return 0;
    }

   int val1= Gridways(row,col+1,n,m);//right

   int val2= Gridways(row+1,col,n,m);//Left

   return val1+val2;
  
}
int main(){
    int n1=3,m1=3;//n1=row,m1=colm
    cout<<Gridways(0,0,n1,m1);
    cout<<endl;
    int n2=6,m2=5;
    cout<<Gridways(0,0,n2,m2);

    return 0;
}