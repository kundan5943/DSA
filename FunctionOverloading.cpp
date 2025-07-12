//Function overloading
//Multiple function with same name but different parameter
#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
void sum (int a,int b,int c)
{
    int sum =a+b+c;
    cout<<sum<<endl;
}
void sum(float x,float y)
{
    float sum =x+y;
      cout<<sum<<endl;
}
void sum(float x,float y,float z)
{
    float sum =x+y+z;
      cout<<sum<<endl;
}
void sum(int f,float g)
{ //in this fuction i use different data type variable
      float sum =f+g;
      cout<<sum<<endl;
}
int main(){
    int a=10,b=7,c=9;
    sum(a,b);
    sum(a,b,c);
    float x=1.2,y=5.2,z=1.3;
    sum(x,y);
    sum(x,y,z);
    sum (a,x);//this is good example just look once 
    
    return 0;
}