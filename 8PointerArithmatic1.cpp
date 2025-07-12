//pointer Arithmatic 1
#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int *ptr =&a;
   
    cout<<ptr<<endl;
    ptr++;//here memory space updated by 4 bytes,simply if before memory address is 0x61ff08 after pointer ++ it move to next block by 4 bytes its become 0x61ff0c,(8+4=12,12=c in hexadecimal)
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    ptr--;//here i derement pointer (becacuse is int variable its decrement with 4 bytes) 0x61ff0c-4=0x61ff08.(12-4=8)
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
   

   

    return 0;
}