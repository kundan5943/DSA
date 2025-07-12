//PassBy Refrence with pointer
#include<iostream>
using namespace std;
void changeA(int *ptr1)
{
   * ptr1 =70;
   cout<<*ptr1<<endl;
}
void changeB(int *ptr2)
{
   * ptr2 =58;
   cout<<*ptr2<<endl;
}
int main(){
    int a=54;
    int b=40;
    changeA(&a);
    cout<<a<<endl;

    changeB(&b);
     cout<<b<<endl;

    return 0;
}