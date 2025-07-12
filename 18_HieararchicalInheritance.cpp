//Hierarchical Inheritance
#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"Animal can eat "<<endl;
    }
    void breadth()
    {
        cout<<"Animal can breadth"<<endl;
    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"dogs can bark"<<endl;
    }
    void run()
    {
        cout<<"dogs can run"<<endl;
    }
};
class Lion:public Animal
{
    public:
    void king()
    {
        cout<<"lion is a king of jungle"<<endl;
    }
};
int main(){
    Lion obj1;
    obj1.eat();
    obj1.breadth();
    obj1.king();
   
   Dog obj2;
   obj2.eat();
   obj2.breadth();
   obj2.bark();
   obj2.run();
    return 0;
}