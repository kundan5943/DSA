#include<iostream>
using namespace std;

int main(){
    int matrix[5][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16},
                   {17,18,19,20},
                   };
    int n=5;//rows
    
    
    int m=4;//columns
             
              int strow=0;
              int stcolum=0;
              int endrow=n-1;
              int endcolum=m-1;
while(strow<=endrow && stcolum<=endcolum)
  {            for(int i=stcolum;i<=endcolum;i++)//top
              {
                cout<<matrix[strow][i]<<" ";
              }
              
              for(int j=strow+1;j<=endrow;j++)//right
              {
                cout<<matrix[j][endcolum]<<" ";

              }
              for(int k=endcolum-1;k>=stcolum;k--)//bottom
              {
               cout<<matrix[endrow][k]<<" "; 
              }
              for(int p=endrow-1;p>=strow+1;p--)//left
              {
                cout<<matrix[p][stcolum]<<" ";
              }
              strow++;
              stcolum++;
              endrow--;
              endcolum--;
  }



    return 0;
}