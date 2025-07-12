//Hybrid inheritance
#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;//imaginary
    public:
    Complex(int r,int i)
    {
           real=r;
           img=i;
    }
    void show()
    {
        cout<<real<<"-"<<img<<"i"<<endl;
    }
    void operator-(Complex &c2)
    {   
        int resreal=real-c2.real;
        int resimg=img-c2.img;
       Complex c3(resreal,resimg);
       c3.show();
    
    }
};
int main(){
    
    Complex c1(4,8);
    Complex c2(2,6);
   c1-c2;
   Complex c3(5,6);
   Complex c4(3,3);
   c3-c4;
    return 0;
}