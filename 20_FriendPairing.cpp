#include<iostream>
using namespace std;
int friendspairing(int n)
{
    if(n==1||n==2)
    {

        return n;
    }
    return friendspairing(n-1)+(n-1)*friendspairing(n-2);
}
int main(){
    cout<<friendspairing(3)<<endl;
    cout<<friendspairing(5)<<endl;
    return 0;
}