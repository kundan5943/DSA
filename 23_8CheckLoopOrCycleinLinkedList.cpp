#include<iostream>
using namespace std;
class Node
   
{   
   
    public:
    int data;
    Node*next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
   
   
};
class list{
    public:
 Node *head;
 Node *tail;  

     list()
   {
    head=NULL;
    tail=NULL;
   }

  
   
 
 void push_front(int val)
 {
     Node *newnode=new Node(val);
     if(head==NULL)
     {
      head=tail=newnode;
     }
     else
     {
      newnode->next=head;
      head=newnode;

     }
 }
  
   void printLL()
   {
        Node* temp=head;
        while(temp!=NULL)
        {
          cout<<temp->data<<"->";
          temp=temp->next;
        }
        cout<<"NULL"<<endl;
   }
   
 
   bool IsCycle()//detect a cycle or loop in a linked list 
   {
    Node * slow=head;
    Node * fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow =slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            cout<<"Cycle Exist"<<endl;
            return true;
        }

    }
    cout<<"Cycle is not Exist"<<endl;
    return false;


   }
};




int main(){
    list ll;
    ll.push_front(8);
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printLL();
   
    ll.IsCycle();

    ll.tail->next=ll.head->next->next;
    ll.IsCycle();

    return 0;
}