#include<iostream>
#include<stack>
using namespace std;
class Queue
{
     stack<int> s1;
     stack <int> s2;
    public:
     void push(int val)
     {
          while(!s1.empty())
          {
            s2.push(s1.top());
            s1.pop();
          }

          s1.push(val);

          while(!s2.empty())
          {
            s1.push(s2.top());
            s2.pop();
          }
     }
     void pop()
     {
        s1.pop();
     }

    int  front()
    {
        return s1.top();
    }
    bool empty()
    {
        if(s1.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }
     
};
int main(){
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    while(!Q.empty())
    {
        cout<<Q.front()<<endl;
        Q.pop();
    }
    

    return 0;
}