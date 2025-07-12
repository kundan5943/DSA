#include<iostream>
using namespace std;
int ClearRangeBit(int num,int i,int j)
{
    int a= (~0)<<(j+1);
    int b=(1<<i)-1;
    /* 00100   (4 in binary)
     - 00001   (1 in binary)
   ------------
       00011   (3 in binary)

  */

    int bitmask=a|b;
    num =num & bitmask;
    return num;
}
int main(){
    int num =15;
    int st=1;
    int end=3;

   cout<<ClearRangeBit(num,st,end)<<endl;
   
   cout<<ClearRangeBit(8,2,3)<<endl;
   
   cout<<ClearRangeBit(10,0,2)<<endl;

    return 0;
}