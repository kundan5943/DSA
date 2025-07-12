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
    vector <int> Adddata()//its simply add data to vector
    {
      Node * temp =head;
      vector<int> vec1;
      while(temp!=NULL)
      {
        vec1.push_back(temp->data);
        temp=temp->next;

      }
      return vec1;
    }
    
};
bool Checkpalindrome(vector <int> vec1,vector<int> vec2)
{
  for(int i=0;i<vec1.size();i++)
  {
    if(vec1[i]!=vec2[i])
    {
      cout<<"It is not a palindrome"<<endl;
      return false;
    }
  }
  cout<<"it is a palindrome"<<endl;
  return true;
}

int main(){
    list ll;
    ll.push_front(2);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(1);

   
    ll.printLL();

    

    vector <int> vec1=ll.Adddata();
    ll.ReverseLL();
    vector <int> vec2=ll.Adddata();
    int size=vec1.size();
    cout<<Checkpalindrome(vec1,vec2)<<endl;
    return 0;
}