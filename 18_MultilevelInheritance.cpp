//Multilevel Inheritance
#include<iostream>
using namespace std;
class Animal
{
 public:
 void eat()
 {
    cout<<"Animal can eat"<<endl;
 }
 void drink()
 {
    cout<<"animal can drink"<<endl;
 }
};
class Mammal:public Animal
{  public:
        string blood="Worm";
};
class Dog:public Mammal
{   public:
      void run()
      {
        cout<<"dogs can run faster"<<endl;
      }

};
int main(){
    Dog obj1;
    obj1.eat();
    obj1.run();
   cout<<obj1.blood<<endl;
    return 0;
}