#include<iostream>
using namespace std;
class Animal {
      public:
    void eat()
    {
        cout<<"animals can eat"<<endl;

    }
    void sleep()
    {
        cout<<"animals can sleep<<endl"<<endl;
    }
    void drink()
      {  cout<<"animals can drink water"<<endl;

      }
};
class Dog:public Animal
{ public:
      void run()
      {
        cout<<"dog can run faster"<<endl;
      }    
     void pet()
     {
        eat();//inherited in dog class
        cout<<"it is a pet animal"<<endl;
     }

};

int main(){
   Dog dg;
   dg.eat();
   dg.run();
   dg.pet();//this will give output dog class and also animal class
    return 0;
}