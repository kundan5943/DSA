#include<iostream>

using namespace std;
template<class T>
class Node
{
    public:
    T data;
    Node * next;
    Node(T val)
    {
        data =val;
        next=NULL;
    }

};
template<class T>
class Stack
{     
    public:
      Node <T> *head;
      Stack()
      {
        head=NULL;
      }

      void Push(T val)
      {
        Node <T>* newnode=new Node<T>(val);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
           newnode->next=head;
           head=newnode;
        }
      }
      void Pop()
      {
        if(head==NULL)
        {
            return;
        }
        
        else
        {
            Node<T>*temp=head;
            head=head->next;
            delete temp;
        }

      }
      T Top()
      {
        if(head==NULL)
        {
            return -1;
        }
        else
        {
            return head->data;
        }
      }
};
int main(){
    Stack <int> s;
    s.Push(9);
    s.Push(1);
    s.Push(6);
    s.Push(2);
    s.Pop();
    cout<<s.Top();
    while()
    return 0;
} 