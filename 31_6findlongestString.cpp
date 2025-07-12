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
{     Node* root;
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
      string longesthelper(Node *root,string &ans,string temp )
      {
         
        for(pair<char,Node*>p:root->childrens)
        {
            if(p.second->endword==true)
            {
            temp+=p.first;
            if((temp.size()==ans.size()&&temp<ans)||temp.size()>ans.size())
            {
               ans=temp;
            }

            longesthelper(p.second,ans,temp);
            temp=temp.substr(0,temp.size()-1);

        }
        }
        return ans;
       
      }
      string LongeststringWithEOW()
      {
        string ans="";
        

        return longesthelper(root,ans,"");
      }
};
string findlongestString(vector<string>str)
{
    Tries tr;
    for(int i=0;i<str.size();i++)
    {
        tr.insert(str[i]);
    }
    
    return tr.LongeststringWithEOW();
}
int main(){
    vector<string>arr={"a","ap","app","appl","aim","apple","apply"};
    cout<<findlongestString(arr);

   
  
    return 0;
}