#include<iostream>
using namespace std;
class Node
   
{   
   
    public:
    int data;
    Node *prev;
    Node*next;
    Node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
   
};
class Doublylist{
    public:
 Node *head;
 Node *tail;  
  
     Doublylist()
   {
    head=NULL;
    tail=NULL;
   }
   void Push_front(int val)
   {
    Node * newnode=new Node(val);
    if(head==NULL)
    {
       head=tail=newnode;
    }
    else{
        

        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
   }
   void Pop_front()
   {

    if(head!=NULL)
    {
        Node*temp=head;
        head=head->next;
        head->prev=NULL;

        delete temp;
    }
    else{
        cout<<"It's already NULL"<<endl;
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
           newnode->prev=tail;
           tail=newnode;
        }
        
   }
   void Pop_back()
   {
    if(head!=NULL)
    {
       Node * temp=head;
       if(head->next==NULL)
       {
        delete temp;
       }
        while(temp->next->next!=NULL)
        {
             temp=temp->next;
        }
        
        delete temp->next;
        temp->next=NULL;
        tail=temp;
    }
   }
   void printdl()
   {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
   }

};  
   
 
 

int main(){
    Doublylist dl;
    dl.Push_front(5);
    dl.Push_front(4);
    dl.Push_front(3);
    dl.Push_front(2);
    dl.Push_front(1);
    dl.push_back(6);
    dl.printdl();
    dl.Pop_front();
    
    dl.printdl();
    dl.Pop_back();
    dl.printdl();
    return 0;
}