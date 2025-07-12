#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    
    d.push_front(0);
    d.push_front(-1);
    
   
    cout<<endl;
    d.pop_back();
    d.pop_front();

    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    
    }
    
    return 0;
}