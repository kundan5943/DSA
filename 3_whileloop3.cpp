//print the sum of odd of a number using while loop
#include<iostream>
using namespace std;

int main(){
    int n=132679;
    int sum =0;
    while (n>0)
    {
        int lastdig= n%10;
        if(lastdig%2 !=0)
        {
            sum=sum +lastdig;
        }
        n=n/10;
    }
    cout<<"sum of odd number is"<<sum<<endl;
    return 0;
}