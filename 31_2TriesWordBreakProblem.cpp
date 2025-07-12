#include<iostream>
#include<vector>
#include<string>
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
bool helper(Tries &obj,string key)
{   
    if(key.size()==0)
    {
        return true;
    }
    Node * temp=obj.root;
    int n=key.size()-1;
    for(int i=0;i<key.size();i++)
    {

    string first =key.substr(0,i+1);
    string second =key.substr(i+1,n);
    if(obj.search(first)&&helper(obj,second))
    {

        return true;
    }

    }
    return false;
}
bool wordbreak(vector<string>document,string key)
{
    Tries obj1;
    for(int i=0;i<document.size();i++)
    {
    obj1.insert(document[i]);

    }
    
    return helper(obj1,key);
}
int main(){
    vector<string>document{"i","like","sam","samsung","mobile"};
    string key="ilikesamsung";
    
     cout<<wordbreak(document,key);

  
    return 0;
}