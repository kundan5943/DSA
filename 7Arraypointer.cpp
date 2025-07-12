//array pointer acts like a constant pointer
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr =&a;

    cout<<ptr<<endl;

    int arr[5];

   // arr=&a; its give error ,with this example we understand that pointers are constant

    return 0;
}