#include<iostream>
using namespace std;

int main(){
     int matrix[5][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15},
                       {16,17,18,19,20},
                       {21,22,23,24,25}};
    cout<<*(*(matrix+1)+3)<<endl;//using this we can able to print matrix
    cout<<*(*(matrix+3)+4)<<endl;
    cout<<*(*(matrix+2)+3)<<endl;
    return 0;
}