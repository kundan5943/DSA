//Pointer arithmatic 3
//ptr1+ptr2 is inavalid operation 
//ptr1 + ptr2 is valid operation but should be same type

#include<iostream>
using namespace std;

int main(){
   int arr[5]={4,1,7,3,8};
   int *ptr1 =arr;
   
   int *ptr2=ptr1+2;
   cout<<ptr1<<endl;
   cout<<ptr2<<endl;
   cout<<"difference between two pointers is -"<<ptr2-ptr1<<endl;//it give you difference between two pointer and how many variables can be store between them

   cout<<*ptr1<<endl;
   cout<<*ptr2<<endl;

   
  
    return 0;
}