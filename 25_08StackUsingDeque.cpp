//stack using deque
#include<iostream>
#include<deque>
using namespace std;
 

class stack
{
      deque<int>dq;
      public:
      void push(int val)
      {
           
        dq.push_back(val);
        
      }
      void pop()
      {
        if(empty())
        {
            cout<<"Stack is empty"<<endl;
        } 
        else
        {   
            dq.pop_back();
        }
      }
      int top()
      {
         return dq.back();
      }
      
      bool empty()
      {
        if(dq.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
      }

};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}