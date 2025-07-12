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
class Linkedlist{
    public:
 Node *head;
 Node *tail;  
  
     Linkedlist()
   {
    head=NULL;
    tail=NULL;
   }

   
   
 
 
  void push_back(int val)
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
   void insertLL(int val,int pos)
   {
        Node * newnode=new Node(val);

        Node * temp=head;
        for(int i=0;i<pos-1;i++)
        {
           temp=temp->next;
        }
        
        newnode->next=temp->next;
        temp->next=newnode;

   }
   void pop_front()
   {
    Node * temp = head;
    head =temp->next;
    delete temp;
   }
   void pop_back1()//Using tail 
   {

    Node * temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
     
    temp->next=NULL;
    delete tail;
    tail=temp;
   }
   void pop_back2()//without using tail
   {
       Node*temp=head;
       while(temp->next->next!=NULL)
       {
        temp=temp->next;
       }

        temp->next=NULL;
        delete tail;
        tail=temp;
   }
};
Node * Merg(Node*left,Node*right)
{
    Linkedlist ans;
    while(left!=NULL && right!=NULL)
    {  
        if(left->data <= right->data)
        {
           ans.push_back(left->data);
           left=left->next;
        }
        else
        {
            ans.push_back(right->data);
            right=right->next;
        }
    }

    while(left!=NULL)
    {
          ans.push_back(left->data);
          left=left->next;

    }
    while(right!=NULL)
    {
        ans.push_back(right->data);
        right=right->next;
    }
    return ans.head;

}
Node*splitmid(Node*head)
{   
    Node*slow=head;
    Node*fast=head;
    Node*prev=NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;

    }
    prev->next=NULL;
    return slow;
}
 Node * Mergsort(Node * head)
{
       if(head==NULL || head->next==NULL)
       {
        return head;
       }
       Node*righthead=splitmid(head);

       Node*lefthalf=Mergsort(head);
       Node *righthalf=Mergsort(righthead);

        return Merg(lefthalf,righthalf);

}
int main(){
    Linkedlist ll;
    ll.push_back(8);
    ll.push_back(7);
    ll.push_back(6);
    ll.push_back(5);
    ll.push_back(4);
    ll.printLL();
    ll.head=Mergsort(ll.head);
    ll.printLL();
    return 0;
}