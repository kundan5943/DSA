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
};
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
Node* ReverseLL(Node *head)
{  Node * prev=NULL;
    Node * curr=head;
    while(curr!=NULL)
  {
    Node *nxt =curr->next;
    curr->next=prev;
    prev=curr;
    curr=nxt;
  }
  
return prev;
}

Node* ZigZag(Node * head)
{
   Node * righthead=splitmid(head);
   Node * rightheadrev=ReverseLL(righthead);


   Node* left=head;
   Node *right=rightheadrev;
   Node * tail=right;
   while(left!=NULL && right!=NULL)
   {
         Node* nextleft=left->next;
         Node* nextright=right->next;
         
         left->next=right;
         right->next=nextleft;
         tail=right;

         left=nextleft;
         right=nextright;
   }
   if (right!=NULL)
   {
    tail->next=right;
   }
   return head;
}

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printLL();

    ll.head=ZigZag(ll.head);
    ll.printLL();

    return 0;
}