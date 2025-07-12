//what will ptr2 point in the following code
/*int x=5;int y=10;
int*ptr1=&x;int *ptr=&y;
ptr2=ptr1;*/
#include<iostream>
using namespace std;

int main(){
int x=5, y=10;
int*ptr1=&x;
int *ptr2=&y;
cout<<ptr1<<endl;
cout<<ptr2<<endl;


ptr2=ptr1;//in ptr1 address stored of 'a' and now this 'a' address is also store in ptr2 
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    return 0;
}