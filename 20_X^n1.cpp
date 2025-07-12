#include<iostream>
using namespace std;

int power(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
    return x*power(x,n-1);
}
int main(){
    int x=2;
    int a=8;
    cout<<power(x,5)<<endl;
    cout<<power(a,4);
    return 0;
}