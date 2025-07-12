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
    ~Node()
    {
      cout<<"~NOde"<<data<<endl;
      
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

   ~list()
   {
        cout<<"~list "<<endl;
        Node * temp=head;
    while (temp!=NULL)
    {
      Node* nextnode=temp->next;
      delete temp;
      temp=nextnode;
    }
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
   int RecursiveSearch(Node * temp,int val,int idx)
   {   
      if(temp==NULL)
      { 
        cout<<"key is not found ";
        return -1;
      }
     
     if(temp->data==val)
     {
        cout<<"Key is found at index - ";
        return idx;
     }

     RecursiveSearch(temp->next,val,++idx);

   }
   
   
};
Node * ReverseLL(Node * head,Node * tail)
    {  Node * prev=NULL;
        Node * curr=head;
        while(curr!=NULL)
      {
        Node *nxt =curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
      }
       tail=head;
       head=prev;
       return head;
    }
bool Palindrome(Node * head,Node *tail)


   {
    Node *slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL)
    {
        slow=slow->next;

    }
     
    slow=ReverseLL(slow,tail);
    fast=head;
    while(slow!=NULL)
    {
      if(fast->data!=slow->data)
      { 
        cout<<"it is not a palindrome"<<endl;
        return false;
      }
      fast=fast->next;
      slow=slow->next;
    }
    cout<<"It is a palindrome"<<endl;
    return true;
    
   }

int main(){
    list ll;
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(1);
    ll.printLL();

    

     cout<<ll.RecursiveSearch(ll.head,2,0)<<endl;
    cout<<Palindrome(ll.head,ll.tail)<<endl;
    return 0;
}