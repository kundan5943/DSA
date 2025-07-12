#include<iostream>
using namespace std;
//tax if 10% then multiply income with 0.1 then you will get a tax 
int main(){
    int income;
    int tax;
    cout<<"enter your income"<<endl;
    cin>>income;
    if(income<=500000)
    {
       tax=0;
    }
    else if(income <=100000)
    {
        tax=(0.2 * income);
    }
    else
    {
        tax=0.3 * income;
    }
    cout<<"tax to be paid is="<<tax<<endl;
    return 0;
}