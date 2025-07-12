//binary to decimal
#include<iostream>
using namespace std;
void bintodec(int a)
{
     int n=a;
     int pow=1;//power 2^0,next-2^1,next-2^2 just like that
     int decnum=0;
     while (n>0)
     {
        int lastdig=n%10;
        decnum=decnum + (lastdig*pow);
        pow=pow * 2;
       n= n/10;

     }
     cout<<"decimal number is "<<decnum<<endl;
}
int main(){
    bintodec(01010);
    return 0;
}