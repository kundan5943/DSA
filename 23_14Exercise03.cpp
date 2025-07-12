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
Node* createList(const vector<int>& nums) {
  if (nums.empty()) return nullptr;
  Node* head = new Node(nums[0]);
  Node* curr = head;
  for (int i = 1; i < nums.size(); i++) {
      curr->next = new Node(nums[i]);
      curr = curr->next;
  }
  return head;
}
Node * Merg(Node* list1,Node * list2)
{
      Node *Merg =new Node(-1);
      Node * mptr=Merg;
      Node *left =list1;
      Node * right=list2;

      while(left!=NULL&&right!=NULL)
      {

        if(left->data<=right->data)
        {
          mptr->next=left;
          left=left->next;
          mptr=mptr->next;
        }
        else
        {
          mptr->next=right;
          right=right->next;
          mptr=mptr->next;
        }
      }

     if(left!=NULL)
     {
      mptr->next=left;
     }

     if(right!=NULL)
     {
      mptr->next=right;
     }
      return Merg->next;
}
Node * MergeKlist(vector<Node*> lists)
{  
 
  if(lists.size()==0)
  {
     return NULL;
  }
  if(lists.size()==1)
  {
    return lists[0];
  }
   Node * head=lists[0];
   for(int i=1;i<lists.size();i++)
   {
    head =Merg(head,lists[i]);
   }
   return head;
}
  
int main(){
  list ll;
  vector<int> list1 = {1, 4, 5};
  vector<int> list2 = {1, 3, 4};
  vector<int> list3 = {2, 6};

  Node* l1 = createList(list1);
  Node* l2 = createList(list2);
  Node* l3 = createList(list3);

  vector<Node*> lists = {l1, l2, l3};
  
    ll.head=MergeKlist(lists);
    ll.printLL();
    return 0;
}