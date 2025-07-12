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
Node * deleteNnodes(Node * head,int m ,int n) //delte N nodes after m nodes
{
    Node *temp=head;
    Node *prev=NULL;
    while(temp!=NULL)
    {    
        Node* prev;
         for(int i=0;i<m;i++)
         { if(temp!=NULL) 
           { prev=temp;
            temp=temp->next;
           }
         }
         for(int j=0;j<n;j++)
         {  
            if(temp!=NULL)
            {
            Node *ptr=temp;
            temp=temp->next;
            delete ptr;
            }

         }
         if(prev!=NULL)
         {
         prev->next=temp;
         }

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
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);
    ll.push_back(10);
    ll.push_back(11);
    ll.push_back(12);
    ll.push_back(13);
    ll.push_back(14);
    ll.push_back(15);
    ll.push_back(16);
    ll.printLL();

    int m=4;
    int n =6;
    ll.head=deleteNnodes(ll.head,m,n);
    ll.printLL();
    return 0;
}