//reverse a given number and print result
#include<iostream>
using namespace std;

int main(){
    int n=123456;
    int result=0;
    while(n>0)
    {
        int lastdig=n % 10;
        result=result*10 + lastdig;
        n=n/10;

    }
    cout<<"Reverse of a given number is-  "<<result<<endl;
    return 0;
}