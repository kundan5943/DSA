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

 Node *head;
 Node *tail;  
  public:
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
};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printLL();

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printLL();

    ll.insertLL(0,2);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
    return 0;
}