//local or global scope
#include<iostream>
using namespace std;
int x =0;//global variable it can be use anywhere in program
void sum(int a,int b)
{
    int sum;//local variable
     sum=a+b;
    cout<<sum<<endl;
    cout<<x<<endl;
    
}
int main(){
    int y=10;//local varible it can be use only in this function
    int z=52;//local variable
    sum(y,z);
    cout<<x<<endl;
    //cout<<sum<<endl;its give error because it use not declared in main function
    return 0;
}