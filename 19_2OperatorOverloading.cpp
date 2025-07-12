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
 Complex operator +(Complex &c2)
    {
       int resreal=real+c2.real;
       int resimg=img+c2.img;
       Complex c3(resreal,resimg);
       cout<<"result = ";
       return c3;

       
    }
};
int main(){
    Complex c1(2,4);
    c1.show();
    Complex c2(5,6);
    c2.show();
    Complex c3=c1+c2;
    c3.show();
    return 0;
}