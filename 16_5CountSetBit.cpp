#include<iostream>
using namespace std;
int CountsetBits(int num)
{
    int lastdigit;
    int count=0;
    while(num>0)
    {
        lastdigit=num&1;
        count+=lastdigit;
        num=num>>1;
    }
    return count;
}

int main(){
    cout<<CountsetBits(10)<<endl;
     cout<<CountsetBits(5)<<endl;
      cout<<CountsetBits(7)<<endl;
       cout<<CountsetBits(15)<<endl;
     
    return 0;
}