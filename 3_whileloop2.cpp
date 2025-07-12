//print the sum of digits of a number using while loop
#include<iostream>
using namespace std;

int main(){
    int n=502879;
    int sum =0;
    cout<<"reminders are ";
    while (n>0)
    {
        int lastdig=n%10;/*if you take modulo of 10 with any number they give a reminder. ex-17%10=7,45%10=5,59%10=9, 
        modulo work is to give a reminder. */
        cout<<lastdig;
        sum+=lastdig;
       n= n/10;

    }
    cout<<endl;
    cout<<"sum is -"<<sum<<endl;
    return 0;
}