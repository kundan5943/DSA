//case1- static keyword in function
#include<iostream>
using namespace std;
void print1()
{
    int count=5;/*this line will run again and again if you call this function ,once a work done 
    memory get deleted and when you call the memory is initialized*/
    cout<<count<<endl;
    ++count;
}
void print2()
{
    static int count=0;/*this line will runs only once in entire program even if you call this function again and again ,Memory is initialized
     only once in entire progran for this variable*/
    cout<<count<<endl;
    ++count;
    
}


int main(){
    //without static keyword
   print1();
   print1();
   print1();
   print1();
cout<<"_____________________________________"<<endl;
 //with static keyword
   print2();
   print2();
   print2();
   print2();
    return 0;
}