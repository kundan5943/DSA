//Homework question where we need to start searching from index [4][0].[4-row][0-column]
#include<iostream>
using namespace std;
bool Searchkey(int matrix[][5],int n,int m,int key)
{
    int i=n-1;//row
    int j=0;//column
    while(i>=0 && j<n)
    {   cout<<"("<<i<<","<<j<<")"<<endl;
        if(matrix[i][j]==key)
        {
            cout<<"Key found at index ("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if(matrix[i][j]>key)
        {
            i--;//row--
        }
        else
        {
           j++;
        }
    }
    cout<<"Key was not found "<<endl;
}
int main(){
     int matrix[6][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15},
                       {16,17,18,19,20},
                       {21,22,23,24,25},
                       {26,27,28,29,30}};
    Searchkey(matrix,6,5,13);
    Searchkey(matrix,6,5,18);
    return 0;
}