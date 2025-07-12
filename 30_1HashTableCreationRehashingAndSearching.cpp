#include<iostream>
#include<string>
using namespace std;
class Node
{
      public:

    string key;
      int val;
      Node* next;

      Node(string key ,int val)
      {
        this->key=key;
        this->val=val;
        next=NULL;
      }
      ~Node()
      { 
        if(next!=NULL)
        { 
            delete next;
        }
      }
};
class HashTable
{     
    int hashfunction(string key)
    {
        int indx=0;
        for(int i=0;i<key.length();i++)
        {
            indx=(indx+(key[i]*key[i]))%totlsize;
        }
        return indx;
    }
    void rehash()
    {   Node**oldtable=table;
        int oldtablsize=totlsize;
        totlsize=oldtablsize*2;
        currsize=0;

        
        table=new Node*[totlsize];
        
        for(int i=0;i<totlsize;i++)
        {
            table[i]=NULL;
        }
        for(int i=0;i<oldtablsize;i++)
        {
             Node*temp=oldtable[i];
            while(temp!=NULL)
            {
                 insert(temp->key,temp->val);
                 temp=temp->next;

            }
           delete oldtable[i];
        }
        
        delete [] oldtable;

    }
      public:
      int totlsize;
      int currsize;
      Node**table;

      HashTable(int totlsize=5)
      {
        this->totlsize=totlsize;
        table=new Node *[totlsize];

        for(int i=0;i<totlsize;i++)
        {
            table[i]=NULL;
        }

      }

      void insert(string key,int val)
      {
           int indx=hashfunction(key);
           Node*head=table[indx];
           
           Node *newnode=new Node(key,val);

           newnode->next=head;
           table[indx]=newnode;
           head=newnode;

           currsize++;
           float lambda=currsize/totlsize;

           if(lambda>1)
           {
               rehash();
           }
      }
      bool exist(string key)
      {
        int idx=hashfunction(key);
        Node * temp=table[idx];
        while(temp!=NULL)
        {
            if(temp->key==key)
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
      }
      int searchkey(string key)
      { 
        int idx=hashfunction(key);

        Node *temp=table[idx];
        while(temp!=NULL)
        {
            if(temp->key==key)
            {
                return temp->val;
            }
            temp=temp->next;
        }

        return -1;
            
      }
      void print()
      {
        for(int i=0;i<totlsize;i++)
        {
            Node*temp=table[i];
            cout<<"index "<<i<<":-";
            while(temp!=NULL)
            {
                cout<<"( "<<temp->key<<","<<temp->val<<") ->";
                temp=temp->next;
            }
            cout<<"NULL";
            cout<<endl;
        }
      }
    

};
int main(){
    HashTable ht;
    ht.insert("India",1);
    ht.insert("uk",2);
    ht.insert("china",50);
    if(ht.exist("India"))
    {
        cout<<"key-India ,val- "<<ht.searchkey("India")<<endl;
    }
        
       ht.print();
    return 0;
}