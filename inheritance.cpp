#include<iostream>
using namespace std;
class A
{  public:
    int a=10;
    int b=15;
 
   int d;
    void seta(int a)
    {
        this->a =a;
    }
    void setb(int b)
    {
        this->b =b;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
class B:public A
{
    int c;
    public:
    
    B(int a,int b)
    {
      seta(5);
      setb(6);
    }
    int add()
    {
        c=geta()+getb();
        return c;
    }
 
};

int main(){
    B obj(5,6);
    cout<<obj.add()<<endl;
     
   
    return 0;
}