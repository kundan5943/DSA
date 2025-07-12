#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Node
{
    public:
    unordered_map<char,Node*>childrens;
    bool endword;
    int freq;
    Node()
    {
        endword=false;
        freq=1;
        
    }
};
class Tries
{
      public:
      Node* root;
      Tries ()
      {
         root=new Node();
         root->freq=-1;

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
            else{
                temp->childrens[s[i]]->freq++;
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
string helper(Tries &obj,string str)
{
       string prefix="";
       Node *temp=obj.root;
      
       
       for(int i=0;i<str.size();i++)
       {
        prefix+=str[i];
        
        if(temp->childrens.count(str[i]))
        {
            temp=temp->childrens[str[i]];
          
            if(temp->freq==1)
            {
                return prefix;
            }
        }
        }
        return prefix;


}
void prefix(vector<string> document)
{   
    Tries obj;
    for(int i=0;i<document.size();i++)
    {
        obj.insert(document[i]);
    }
    for(int i=0;i<document.size();i++)
    {
       cout<<helper(obj,document[i])<<endl;
    }

}
int main(){
    vector<string>arr{"zebra","dog","dove","duck","cat","car"};
   prefix(arr);

  
   
    return 0;
}