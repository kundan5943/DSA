#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void ReverseQueue(queue<int> & q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();

    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

}
int main(){
    queue<int>q;
    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
     
    ReverseQueue(q);

    for(int i=0;i<10;i++)
    {
       cout<<q.front()<<" ";
       q.pop();
    }
   
    return 0;
}