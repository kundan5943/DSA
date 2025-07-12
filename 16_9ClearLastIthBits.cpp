#include<iostream>
using namespace std;
int clearlastbits(int num,int i)//this function simply clear the last  Ith bits 
{
    int bitmask=~(0)<<i;
    num=bitmask&num;
    return num;
}
int main(){
    int num=15;
    cout<<clearlastbits(num,2);
    cout<<clearlastbits(5,2);
    cout<<clearlastbits(4,3);
    cout<<clearlastbits(9,3);
    return 0;
}