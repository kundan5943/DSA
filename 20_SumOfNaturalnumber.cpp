#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);

}
int main(){
    cout<<sum(5)<<endl;
    cout<<sum(15)<<endl;

    return 0;
}