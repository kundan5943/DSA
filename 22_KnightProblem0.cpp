#include<iostream>
using namespace std;
void printboard(int board[][6])
{
     for(int i=0;i<6;i++)
     {
        for(int j=0;j<6;j++)
        {
            cout<<board[i][j]<<"   ";
        }
        cout<<endl;
       
     }
     cout<<"___________________________________________"<<endl;
}
bool issafe(int row,int col,int movecount,int board[][6])
{
    return (row >= 0 && row < 6 && col >= 0 && col < 6 && board[row][col] == -1);

}
bool knight(int row,int col,int dx[],int dy[],int movecount ,int board[][6])
{
    if (movecount==6*6)
    {
        printboard(board);
        return true;
    }
    
    
    for(int i=0;i<8;i++)
    {
        int nextrow=row+dx[i];
        int nextcol=col+dy[i];
        if(issafe(nextrow,nextcol,movecount,board))
        {  
            board[nextrow][nextcol]=movecount;
            if(knight(nextrow,nextcol,dx,dy,movecount + 1,board))
            {
                return true;
            }

            board[nextrow][nextcol]=-1;
           

        }

    }
   
    return false;
}
int main(){
    int board[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {

            board[i][j]=-1;//this -1 shows that this row column is not visited
        }
    }

    int dx[8]={-2,-2,-1,1,2,2,1,-1};
    int dy[8]={-1,1,2,2,1,-1,-2,-2};
     
    board[0][0]=0;

   
    if (!knight(0, 0, dx, dy, 1, board)) {
        cout << "No solution found." << endl;
    }
    

    return 0;
}