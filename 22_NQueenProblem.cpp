#include<iostream>
#include<vector>
using namespace std;
bool IsSafe(vector<vector<char>> board,int row,int col)
{   
    int n=board.size();
     for(int j=col;j<n;j++)//horizontal 
     {
        if(board[row][j]=='Q')
        {
            return false;
        }
     }
     for(int i=0;i<=row;i++)//vertical
     {
        if(board[i][col]=='Q')
        {
            return false;
        }
     }
     for(int i=row,j=col;i>=0 && j>=0;i--,j--)//Left Diagonal
     {

        if (board[i][j]=='Q')
        {
            return false;
        }
     }
     for(int i =row,j=col;i>=0 && j<n;i--,j++)//Right Diagonal
     {
        if (board[i][j]=='Q')
        {
            return false;
        }
     }

    return true;
}
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
     cout<<"___________________________________________"<<endl;
}
void NQueens(vector<vector<char>> board,int row)
{   
    int n=board.size();
    if(row==n)
    {
        printboard(board,n);
        return;
    }
    

    for(int j=0;j<n;j++)
    {   
        if(IsSafe(board,row,j))
        {
           board[row][j]='Q';
           NQueens(board,row+1);
           board[row][j]='.';
        }
    }
}
int main(){
    vector<vector<char>> board;
    int n=6 ;
    for(int i=0;i<n;i++)
    {
        vector<char>vec1;
        for(int j=0;j<n;j++)
        {
              vec1.push_back('.');
        }
        board.push_back(vec1);
    
    }
    printboard(board,n);
    
    

    return 0;
}