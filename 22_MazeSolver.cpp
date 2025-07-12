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
void Mazesolver(int arr[][5],int row,int col,int n,int m,bool visited[][5],string ans)
{   
   
    if(row==n-1&&col==m-1&&arr[row][col]!=0)
    {   
        cout<<ans<<endl;
        return;
    }
    visited[row][col]=true;
   
    //right move 
    if(issafe(arr,row,col+1,n,m,visited))
    {
         Mazesolver(arr,row,col+1,n,m,visited,ans+"R");
        

    }
    //left move
    if(issafe(arr,row,col-1,n,m,visited))
    {
       Mazesolver(arr,row,col-1,n,m,visited,ans+"L");
     
    }
    //up move
   if(issafe(arr,row-1,col,n,m,visited))
    {
      Mazesolver(arr,row-1,col,n,m,visited,ans+"U");
        
    }
    //down move
    if(issafe(arr,row+1,col,n,m,visited))
    {
        Mazesolver(arr,row+1,col,n,m,visited,ans+"D");
       
    }
    
    visited[row][col]=false;
    return;
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
    Mazesolver(arr,0,0,n,m,visited,ans);
   
    return 0;
}