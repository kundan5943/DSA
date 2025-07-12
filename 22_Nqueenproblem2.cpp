//Print Only one answer
#include<iostream>
#include<vector>
using namespace std;
void printboard(vector<vector<char>>board,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool safe(vector<vector<char>>board,int row,int col)
{
    int n=board.size();
    //horizontal
    for(int j=0;j<n;j++)
    {
        if(board[row][j]=='Q')
        {
            return false;
        }
    }
    //vertical
    for(int i=0;i<=row;i++)
    {
        if(board[i][col]=='Q')
        {
            return false;
        }
    }
    //left diagonal
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    //right diagonal
    for(int i=row,j=col;i>=0&&j<n;i--,j++)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    return true;
}
bool Nqueen(vector<vector<char>>board,int row)
{   
    int n =board.size();
    if (row==n)
    {   printboard(board,n);
        cout<<"_________________________________"<<endl;
        return true;
    }
    
    for(int j=0;j<n;j++)
    {   
        if(safe(board,row,j))
        {
           board[row][j]='Q';
           
           if(Nqueen(board,row+1))
           {
            return true;
           }
           board[row][j]='.';
        }

    }
    return false;
}
int main(){
    vector<vector<char>>board;
    int n=8;
    for(int i=0;i<n;i++)
    {
        vector<char>vec1;
        for(int j=0;j<n;j++)
        {
            vec1.push_back('.');

        }
        board.push_back(vec1);
    }
  Nqueen(board,0);
  
    return 0;
}