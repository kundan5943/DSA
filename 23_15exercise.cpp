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
Node * SwapNode(Node * head,int key1,int key2)
{   
    Node * temp1=head;
    while(temp1!=NULL && temp1->data!=key1)//Always put pointer != NULL before accessing pointer->something.
    {
        temp1=temp1->next;

    }

    Node* temp2 =head;
    while(temp2!=NULL && temp2->data!=key2)
    {
        temp2=temp2->next;
    }
    if(temp1!=NULL && temp2!=NULL)
    {
        int temp3=temp1->data;
        temp1->data=temp2->data;
        temp2->data=temp3;

    }
    else
    {
        cout<<"key is not found"<<endl;
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

    
    ll.head=SwapNode(ll.head,4,0);
    ll.printLL();
    return 0;
}