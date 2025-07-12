#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*startsWith Problem complete this for a trie:
 bool startsWith(string prefix) words[] = { "apple", "app", "mango", "man", "woman" } //Tries

 prefix = "app" prefix = "moon"  (just check this app and moon are available in Tries or Not)*/
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
bool StartWithPrefix(vector<string>words,string prefix)
{
      Tries t;
      for(int i=0;i<words.size();i++)
      {
        t.insert(words[i]);

      }
      Node *temp=t.root;
      for(int i=0;i<prefix.size();i++)
      {
        if(temp->childrens.count(prefix[i])==0)
        {
            return false;
        }
        temp=temp->childrens[prefix[i]];

      }
      return true;
}
int main(){
   vector<string>words = { "apple", "app", "mango", "man", "woman" };
   string prefix1="app";
   string prefix2="man";
   cout<<StartWithPrefix(words,prefix1)<<endl;
   cout<<StartWithPrefix(words,prefix2)<<endl;
   cout<<StartWithPrefix(words,"men")<<endl;
    cout<<StartWithPrefix(words,"wam")<<endl;

    return 0;
}