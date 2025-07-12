#include<iostream>
using namespace std;
class Node
{   
    public:
    int data;
    Node * next;

    Node(int val)
    {
        data =val;
        next=NULL;
    } 
};
class Queue
{
  
    Node * head;
    Node * tail;
    public:
    Queue()
    {
        head=NULL;
        tail=NULL;
    }

    void inqueue(int val)
    {
        Node * newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void dequeue()
    {
        Node * temp=head;
        head=head->next;
        delete temp;
    }
    int front()
    {
        return head->data;
    }
    void  printQueue()
    {
        Node * temp=head;

        while(temp!=NULL)
        {  
            cout<<temp->data<<"->";
            temp=temp->next ;

        }
        cout<<"NULL"<<endl;
    }

    
};

int main(){
    Queue obj;
    obj.inqueue(1);
    obj.inqueue(2);
    obj.inqueue(3);
    obj.inqueue(4);
    obj.inqueue(5);
    
    obj.printQueue();

    cout<<obj.front()<<endl;

    
    obj.dequeue();
    obj.printQueue();

  
    return 0;
}