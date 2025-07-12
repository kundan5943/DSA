//Fast Exponentiation
#include<iostream>
using namespace std;
int FastExp(int x,int num)
{
    int lastdigit;
    int ans=1;
    while(num>0)
    {
        lastdigit=num&1;

        if(lastdigit)
        {
            ans=ans*x;
        }

        x=x*x;
        num=num>>1;
    }
    return ans;
}
int main(){
   cout<<FastExp(3,4)<<endl;//3^4
    cout<<FastExp(6,5)<<endl;
     cout<<FastExp(2,6)<<endl;
     
    return 0;
}