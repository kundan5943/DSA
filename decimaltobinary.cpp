#include<iostream>
using namespace std;
void dectobin(int a)
{
    int n=a;
    int pow =1;
    int bin=0;
    while(n>0)
    {
        int rem=n%2;
        bin+=rem*pow;
        pow =pow*10;
        n=n/2;
    }
    cout<<bin<<endl;
}

int main(){
    dectobin(15);
    dectobin(6);
    return 0;
}