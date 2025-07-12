#include<iostream>
using namespace std;
void fun2int()
{
  int *ptr = new int;
  *ptr=10;
  cout<<*ptr<<endl;
  

  delete ptr;
  cout<<*ptr<<endl;//it will give you a garbage value
}
void fun1(int size)
{
    //dynamic array
    int *ptr=new int[size];
    int x=1;
    for(int i=0;i<size;i++)
    {   
        ptr[i]=x;
        
        x++;
        
        cout<<ptr[i]<<endl;
    }

    delete [] ptr;
  //  cout<<ptr[0]<<endl; its give you a garbage value because the dynamic array in heap was deleted
}
int main(){
    int size;
    cin>>size;

    fun1(size);

    fun2int();
    return 0;
}