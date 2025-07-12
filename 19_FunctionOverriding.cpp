//Function Overriding
#include<iostream>
using namespace std;
class Parent 
{
    public:
      void show ()
      {
        cout<<"this is a parent class show function"<<endl;
      }

};
class Child:public Parent
{ 
    public:
    void show()
    {
        cout<<"This is Child class show function"<<endl;
    }
};
int main(){
    Child obj;
    obj.show();

    return 0;
}