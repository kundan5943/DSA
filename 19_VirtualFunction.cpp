#include<iostream>
using namespace std;

class Parent
{
    public:
    virtual void show()
    {
        cout<<"Parent class show"<<endl;
    }
    void print()
    {
        cout<<"hbc"<<endl;
    }
};
class Child:public Parent
{
      public:
      void show()
      {
        cout<<"Child class show"<<endl;

      }
      void fbv()
      {
        cout<<"sbfsgd"<<endl;
      }
};

int main(){
    Child obj1;
    Parent *ptr=&obj1;
    /*this pointer simply call to base class function or property and if there is an virtual
     function then they go to derived class call that function*/
    ptr->show();

    ptr->print();
    return 0;
}