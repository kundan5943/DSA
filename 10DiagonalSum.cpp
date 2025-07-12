#include<iostream>
using namespace std;
void DiagonalSum(int matrix[][5],int n,int m)
{  int sum=0;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
              sum+=matrix[i][j];//prediagonal
            }
            else if(j==n-i-1)
            {
                sum+=matrix[i][j];//secondary diagonal
            }
        }
    }
    cout<<"sum of diagonal is "<<sum<<endl;
}
int main(){
    int matrix[5][5]={{2,3,6,8,9},
                      {8,1,4,2,3},
                      {5,8,3,0,1},
                      {6,2,9,7,8},
                      {3,1,2,8,9}};
    int n=5;
    int m=5;
    DiagonalSum(matrix,n,m);

                     
                     
   int matrix2[5][5]={{8,1,4,2,3},
                      {5,8,3,0,1},
                      {6,2,9,7,8},
                      {3,1,2,8,9},
                      {2,6,8,7,5}};
  
    DiagonalSum(matrix2,5,5); 

   return 0;
}