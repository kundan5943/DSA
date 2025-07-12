#include<iostream>
#include<vector>
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
    void ReverseLL()
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
    }
   
     
    
};


int main(){
    list ll;
    ll.push_front(7);
    ll.push_front(2);
    ll.push_front(5);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(1);

   
    ll.printLL();

    ll.ReverseLL();

    ll.printLL();
    return 0;
}