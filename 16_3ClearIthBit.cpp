#include<iostream>
using namespace std;

void ClearIthBit(int num,int i)
{
     int bitmask= ~(1<<i);

     num=(num)&(bitmask);
     cout<<num<<endl;

}

int main(){
    int a=10;

    ClearIthBit(a,3);
    return 0;
}