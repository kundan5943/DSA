#include<iostream>
using namespace std;

int main(){
    int a=45;
    float b=1.5;
    char c='A';

    int * ptr1=&a;
    cout<<&a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    float *ptr2 =&b;
    cout<<ptr2<<endl;
    char *ptr3=&c;
    cout<<ptr3<<endl;
    //_______________________________________
    //here in following code i creating one pointer that store the address of another pointer variable
    int **ptr4 = &ptr1 ;
    cout<<&ptr1<<"="<<ptr4<<endl;
    cout<<"size of int pointers is :"<<sizeof(ptr1)<<endl;
      cout<<"size of float pointers is :"<<sizeof(ptr2)<<endl;
        cout<<"size of char pointers is :"<<sizeof(ptr3)<<endl;
        
    return 0;
}