#include<iostream>
using namespace std;
//Optimized way finding DiagonalSum
void DiagonalSum(int matrix[][5],int n)
{  
     int sum = 0;
    for(int i=0;i<n;i++)
    {  
         sum+=matrix[i][i];
    
      if(i!=n-i-1)
     {
        sum+=matrix[i][n-i-1];
     }
    }
     cout<<"sum of diagonal is "<<sum<<endl;
}
int main(){
   int matrix1[5][5]={ {2,3,6,8,4},
                      {8,5,4,0,3},
                      {5,8,6,0,1},
                      {6,2,9,2,8},
                      {1,1,6,8,1}};
    int n=5;
    DiagonalSum(matrix1,5);
        
    return 0;
}