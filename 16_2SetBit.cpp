//Set Bit
#include<iostream>
using namespace std;
void SetIthBit(int num,int i)
{
     int bitmask=1<<i;
     num=num|bitmask;
     cout<<num<<endl;


}
int main(){
    int a=6,b=5,c=3;

    SetIthBit(a,3);
    SetIthBit(b,2);
    SetIthBit(c,3);

    return 0;
}