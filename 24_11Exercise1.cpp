#include<iostream>
#include<stack>
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
int CountSize(Node* head)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
    return count;
}
bool IsPalindrome(Node *head,int n)
{
  stack<int>s;
  Node * temp=head;
  
for(int i=0;i<n/2;i++)//left half
{
  s.push(temp->data);
  temp=temp->next;

}
if(n%2!=0)
{
  temp=temp->next;
}
while(temp!=NULL)//right half
{
  if(s.top()!=temp->data)
  {
    return false;
  }
  s.pop();
  temp=temp->next;
}

return  true;
 

 
}
int main()
{   

    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(5);
    ll.push_front(5);
    ll.push_front(2);
    ll.push_front(1);
    int n=CountSize(ll.head);
    

    if(IsPalindrome(ll.head,n))
    {
      cout<<"It is a Palindrome"<<endl;
     
    }
    else
    {
      cout<<"It is not a palindrome"<<endl;
      
  
    }
    return 0;
}