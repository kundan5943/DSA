#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Node
{
    public:
    unordered_map<char,Node*>childrens;
    bool endword;
    Node()
    {
        endword=false;

    }
};
class Tries
{
      public:
      Node* root;
      Tries ()
      {
         root=new Node();

      }
     

      void insert(string s)
      {
         Node * temp=root;
        for(int i=0;i<s.size();i++)
        {
            
            if(temp->childrens.count(s[i])==0)
            {
                temp->childrens[s[i]]=new Node();
                
            }
            temp=temp->childrens[s[i]];
        }
        temp->endword=true;
      }
      bool search(string str)
      {

        Node*temp=root;
        for(int i=0;i<str.size();i++)
        {
            if(temp->childrens.count(str[i])==0)
            {
                return false;
            }
            temp=temp->childrens[str[i]];

        }
        if(temp->endword==true)
        {
            return true;
        }
        return false;
      }
};

int main(){
    vector<string>arr{"zebra","dog","dove","duck","cat","car"};

    Tries obj1;
    for(int i=0;i<6;i++)
    {
    obj1.insert(arr[i]);

    }
 
    for(int i=0;i<6;i++)
    {
        cout<<obj1.search(arr[i])<<", ";
    }
    cout<<endl;
    cout<<obj1.search("carr")<<endl;
     cout<<obj1.search("Dog");

  
    return 0;
}