#include<iostream>
#include<list>
using namespace std;
class Node
{   public:
    int data;
    Node * next;
    
    Node(int val)
    {
        data =val;
        next=NULL;
    }
};
class Linkedlist
{
      public:
    Node *head;
    Node * tail;

    Linkedlist()
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

};
int getsize(Node * head)
{

    int size=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
         size++;
    }

    return size;
}
Node * Intersection(Node * head1,Node * head2)
{   
    int m=getsize(head1);
    int n=getsize(head2);
int diff=0;
Node * ptr1=head1;
Node * ptr2=head2;
    if(m>=n)
    {
        diff=m-n;
        for(int i=0;i<diff;i++)
        {
            ptr1=ptr1->next;
        }
    }
    else{
        diff=n-m;
        for(int i=0;i<diff;i++)
        {
            ptr2=ptr2->next;
        }
    }
  
  
   
    while(ptr1!=NULL && ptr2!=NULL && ptr1!=ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr1==NULL)
  {  
    return NULL;
  }
  else{
    return ptr1;
  }
}

int main(){
    
    Linkedlist ll1;
   
    ll1.push_front(7);
    ll1.push_front(6);
    ll1.push_front(3);
    ll1.push_front(2);
    ll1.push_front(1);

    Linkedlist ll2;
    ll2.push_front(5);
    ll2.push_front(4);
   
    
    ll2.tail->next=ll1.head->next->next->next;
   
       Node * ans =Intersection(ll1.head,ll2.head);
       cout<<"The intersection Node Node data is -  "<<ans->data<<endl;;
    return 0;
}