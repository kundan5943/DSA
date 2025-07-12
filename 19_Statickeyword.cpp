#include<iostream>
using namespace std;

int main(){
    static int a=1;//Static variable in main 

    cout<<a<<endl;
      a++;
    cout<<a<<endl;
     a++;
    cout<<a<<endl;
     a++;
    cout<<a<<endl;
   
    return 0;
}