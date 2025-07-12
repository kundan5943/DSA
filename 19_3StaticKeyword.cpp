//static keyword for class object
/*if you use static keyword for class object then this object will destroy just before return 0 ,when return 
0 is readed then firstly this object get deleted then after main function get deleted from stack*/
#include<iostream>
using namespace std;
class Base
{  public:
    Base()
    {
        cout<<"Constructor...\n";
    }
    ~Base()
    {
        cout<<"Destructor...\n";
    }
};

int main(){
   int a=0;
   //without static keyword
   if(a==0)
   {
    Base obj;

   }

    cout<<"code ending here"<<endl;

cout<<"----------------------------------"<<endl;
//With static keyword
if(a==0)
{
    static Base obj; 
} 
cout<<"code ending here"<<endl;
    return 0;
}