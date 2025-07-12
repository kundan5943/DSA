#include<iostream>
#include<string>
using namespace std;
class Complex
{   int real;
    int img;//imaginary 
    public:
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
   void operator +(Complex &c2)
    {
       int resreal=real+c2.real;
       int resimg=img+c2.img;
       Complex c3(resreal,resimg);
       cout<<"result = ";
       c3.show();

       
    }
};
int main(){
    Complex c1(2,4);
    c1.show();
    Complex c2(5,6);
    c2.show();
    c1+c2;
    return 0;
}