#include<iostream>

#include<vector>
using namespace std;
template <class T>
class Stack
{
      vector <T> vec1;
      public:
      
      void Push(T val)
      {
           vec1.push_back(val);
      }
      void Pop()
      {
        if(isempty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        vec1.pop_back();
      }
      T Top()
      { 
       /* if(isempty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;

        }
        */
        int lastidx=vec1.size()-1;
        int ans=vec1[lastidx];
        return ans;
      }
      bool isempty()
      {
        if (vec1.size()==0)
        {
            return true;
        }
        return false;
      }
};
int main(){
    Stack<int> s1;
    s1.Push(5);
    s1.Push(9);
    s1.Push(0);
    s1.Push(3);
    s1.Push(2);
    s1.Pop();
    s1.Pop();
     
    while(!s1.isempty())
    {
        cout<<s1.Top()<<" ";
        s1.Pop();
    }
    cout<<endl;
    Stack<char> s2;
    s2.Push('A');
    s2.Push('B');
    s2.Push('C');
    s2.Push('D');
    s2.Push('E');
    s2.Pop();
    s2.Pop();
    while(!s2.isempty())
    {
        cout<<s2.Top()<<" ";
        s2.Pop();
    }
    return 0;
}