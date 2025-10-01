#include<iostream>
using namespace std;
void printSodoku(int arr[][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 


}
bool IsSafe(int arr[][9],int row ,int col,int digit)
{
    
    for(int i=0;i<9;i++)//Vertical
    {
        if(arr[i][col]==digit)
        {
            return false;
        }
    }

    for(int j=0;j<9;j++)//horizontal
    {

        if(arr[row][j]==digit)
        {
            return false;
        }
    }
    
    int strow=(row/3)*3;
    int stcol=(col/3)*3;

    for(int i=strow;i<=strow+2;i++)//3*3 Grid
    {
        for(int j=stcol;j<=stcol+2;j++)
        {
            if (arr[i][j]==digit)
            {
                return false;
            }
        }
    }
    
    return true;
}
bool Sodukusolver(int arr[][9],int row ,int col)
{   
    if(row==9)
    {   
        //Soduku Solved
        printSodoku(arr);
        return true;
    }
    int nextrow=row;
    int nextcol=col+1;
    if(col+1==9)
    {
        nextrow =row+1;
        nextcol=0;
    }
    if(arr[row][col]!=0)
    {
        return Sodukusolver(arr,nextrow,nextcol);

    }

    for(int digit=1;digit<=9;digit++)
    {
       if(IsSafe(arr,row,col,digit))
       {
          
        arr[row][col]=digit;
         if(Sodukusolver(arr,nextrow,nextcol))
         {
            return true;
         }
         arr[row][col]=0;

       }


    }
  return false;
}
int main(){
    int arr[9][9]={  { 5, 3, 0, 0, 7, 0, 0, 0, 0 },   
                     { 6, 0, 0, 1, 9, 5, 0, 0, 0 },        
                     { 0, 9, 8, 0, 0, 0, 0, 6, 0 },              
                     { 8, 0, 0, 0, 6, 0, 0, 0, 3 },               
                     { 4, 0, 0, 8, 0, 3, 0, 0, 1 },             
                     { 7, 0, 0, 0, 2, 0, 0, 0, 6 },              
                     { 0, 6, 0, 0, 0, 0, 2, 8, 0 },         
                     { 0, 0, 0, 4, 1, 9, 0, 0, 5 },           
                     { 0, 0, 0, 0, 8, 0, 0, 7, 9 } };


                    Sodukusolver(arr,0,0);
    return 0;
}