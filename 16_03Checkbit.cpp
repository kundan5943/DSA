#include<iostream>
using namespace std;

int Checkbit(int x,int i)
{
    int p=1<<i;
    if((x&p))
    {
       return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int a=6;
    int b=5;
    int n=0;//position start from right side of binary number
    cout<<Checkbit(a,n)<<endl;

    cout<<Checkbit(b,n)<<endl;
    return 0;
}