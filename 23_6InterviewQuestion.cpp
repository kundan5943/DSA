//Find and Remove nth node from end in Linked List.
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
   int getsize()
   {
       Node *temp=head;
       int sz=0;//sz-size
       while(temp!=NULL)
       {
        temp=temp->next;
        ++sz;
        
       }
      
       return sz;
   }
    void RemoveNthNode(int n)
    {
        //remove nth node from end.

        int size=getsize();
        Node * prev =head;
        for(int i=1;i<(size-n);i++)
        { 

            prev=prev->next;

        }
      Node*ptr=prev->next;
      cout<<"i'm deleting Nth node from end is -"<<ptr->data<<endl;
        prev->next=prev->next->next;
    }
    
};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_front(8);
    ll.push_front(3);
    ll.push_front(0);
    ll.push_back(9);
    ll.push_back(2);
   
    ll.printLL();

    

     
    
   
     ll.RemoveNthNode(1);
     ll.printLL();
     ll.RemoveNthNode(5);
     ll.printLL();
     ll.RemoveNthNode(3);
     ll.printLL();
    return 0;
}
