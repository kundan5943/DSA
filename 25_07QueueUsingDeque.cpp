#include<iostream>
#include<deque>
using namespace std;
class Queue
{
      deque<int> dq;
      public:
      void push(int val)
      {
           dq.push_back(val);

      }

      void pop()
      {    
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            dq.pop_front();
        }
          
      }
      int front()
      {
          return dq.front();
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
    Queue q;
    q.push(4);
    q.push(5);
     q.push(6);
     q.push(7);
     q.push(8);
     q.push(9);
     
     cout<<q.front()<<endl;
      q.pop();
      q.pop();

      cout<<q.empty()<<endl;

      while(!q.empty())
      {
        cout<<q.front()<<"  ";
        q.pop();
      }
    return 0;
}