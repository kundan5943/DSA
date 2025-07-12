#include<iostream>
#include<stack>
using namespace std;
void pushatBottom(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    pushatBottom(s,val);
    s.push(temp);
}
void Reversestack(stack<int> &s)
{
     
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    Reversestack(s);

    pushatBottom(s,temp);

}
int main(){
    
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(0);
    s.push(6);
    s.push(4);
    Reversestack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}