//null pointer 
#include<iostream>
using namespace std;

int main(){
    
    int *ptr1;//by creating a pointer its get stored in a memory with a memory address
    cout<<ptr1<<endl;
    int *ptr2=NULL;//here i created null pointer and thats not stored in a memory and if you derefrencing this pointer you get an error.
    cout<<ptr2<<endl;


    return 0;
}