#include<iostream>
using namespace std;
int power(int x,int n)
{   

    if (n==0)
    {
        return 1;
    }
    int halfpower=power(x,n/2);
    int halfpowersquare=halfpower*halfpower;
    if(!(n%2==0))
    {
        return x*halfpowersquare;

    }
    return halfpowersquare;
}
int main(){
    cout<<power(2,4);
    return 0;
}