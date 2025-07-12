#include<iostream>
#include<stack>
#include<list>
using namespace std;
void PushatBottom(stack<int> &s,int val)
{
    if(s.empty())
    {
       s.push(val);
       return;
    }

    int temp =s.top();
    s.pop();
    PushatBottom(s,val);
    s.push(temp);
    
}

int main(){
    stack<int>s;
    s.push(5);
    s.push(8);
    s.push(2);
    s.push(6);
    s.push(2);
    s.push(9);

    PushatBottom(s,1);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}