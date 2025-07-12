#include<iostream>
using namespace std;
void CheckPowerOf2(int num)
{
    if(!((num)&(num-1)))
    {
        cout<<"yes it is a power of 2"<<endl;

    }
    else
    {
         cout<<"no its not a power of 2"<<endl;
    }
}
int main(){
 
    CheckPowerOf2(16);
    CheckPowerOf2(4);
    CheckPowerOf2(10);
    CheckPowerOf2(6);
    CheckPowerOf2(20);
    return 0;
}