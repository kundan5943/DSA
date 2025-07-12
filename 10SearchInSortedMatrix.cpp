//Search in sorted matrix (Staircase)
#include<iostream>
using namespace std;
bool searchkey(int matrix[][5],int n,int m,int key)
{
   int row=0;
   int colm=m-1;
   while (row<n && colm>=0)
   {
    cout<<row<<","<<colm<<endl;
    if(matrix[row][colm]==key)
    {
        cout<<"key was found at index("<<row<<","<<colm<<")"<<endl;
        return true;
    }
    else if(matrix[row][colm]>key)
    {
        colm--;
    }
    else{
        row++;
    }
    
   }
   cout<<"key was not find "<<endl;
}
int main(){
     int matrix[5][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15},
                       {16,17,18,19,20},
                       {21,22,23,24,25}};
   
    searchkey(matrix,5,5,17);
    
    return 0;
}