#include<iostream>
#include<vector>
using namespace std;
bool issafe(int arr[][5],int row,int col,int n,int m,bool visited[][5] )
{
    if(row<0 || row>=n||col<0 || col>=m)//outofboundary
    {
       return false;
    }
    
    if(arr[row][col]==0)
    {
        return false;
    }
    if(visited[row][col]==true)
    {
        return false;
    }
    return true;
  
}
int Mazesolver(int arr[][5],int row,int col,int n,int m,bool visited[][5] )
{   
   int count=0;
    if(row==n-1&&col==m-1&&arr[row][col]!=0)
    {
        return 1;
    }
    visited[row][col]=true;
   
    //right move 
    if(issafe(arr,row,col+1,n,m,visited))
    {
        count+= Mazesolver(arr,row,col+1,n,m,visited);

    }
    //left move
    if(issafe(arr,row,col-1,n,m,visited))
    {
      count+= Mazesolver(arr,row,col-1,n,m,visited);
    }
    //up move
   if(issafe(arr,row-1,col,n,m,visited))
    {
        count+= Mazesolver(arr,row-1,col,n,m,visited);
    }
    //down move
    if(issafe(arr,row+1,col,n,m,visited))
    {
        count+=Mazesolver(arr,row+1,col,n,m,visited);
    }
    
    visited[row][col]=false;
    return count;
}
int main(){
    int arr[5][5]={{1,1,1,0,1},
                   {1,0,1,1,1},
                   {1,0,0,1,0},
                   {1,1,0,1,1},
                   {1,1,1,1,1}};
    int n=5;
    int m=5;
    bool visited[5][5]={};
    string ans;
   int count= Mazesolver(arr,0,0,n,m,visited);
   cout<<count<<endl;
    return 0;
}