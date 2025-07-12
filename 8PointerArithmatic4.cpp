#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,8,4,7,5};
    int *ptr1 =arr;
    int *ptr2=ptr1+4;

    cout<<(ptr1<ptr2 )?true:false ;//here we can not add endl its give error
    cout<<endl;
    cout<<(ptr1>ptr2)?true:false; 
    cout<<endl;
    cout<<(ptr1==arr)?true:false;
    cout<<endl;

    return 0;
}