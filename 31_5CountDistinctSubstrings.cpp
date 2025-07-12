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
    
      Node* root;
        public:
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

      int helper(Node*root1)
      {
        int ans=0;
        
        for(pair<char,Node *>p:root1->childrens)
        {
            ans+=helper(p.second);
        }
        return ans+1;

      }
    int countnodes()
    {

       return helper(root);
    }
};

int UniqueSubstrings(string word)
{
    Tries tr;
    for(int i=0;i<word.size();i++)
    {
        tr.insert(word.substr(i));
    }

    return tr.countnodes();

}
int main(){
   string word="apple";
   cout<<UniqueSubstrings(word);

 
    return 0;
}