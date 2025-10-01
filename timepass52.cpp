#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
class Node
{     
        public:
    int data;
    Node *lefttree;
    Node *righttree;
  
      Node(int data)
      {
          this->data=data;
          lefttree=NULL;
          righttree=NULL;
      }

};
static int idx=-1;

 Node * buildtree(vector<int>&tree)
    {
       idx++;
        if(tree[idx]==-1)
        {
            return NULL;
        }
        //  Preorder
        Node * currentnode=new Node(tree[idx]);
        currentnode->lefttree=buildtree(tree);
        currentnode->righttree=buildtree(tree);

       
        return currentnode;
    }

      
    void preorder(Node *root)
    { 

       if(root==NULL)
       {
        return;
       }
       
          
        preorder(root->lefttree);
        preorder(root->righttree);
          cout<<root->data<<" ";

    }

    void TopView(Node * root)
    {
        map<int,int>mp;
        queue<pair<Node*,int>>q;

        q.push({root,0});
        while(!q.empty())
        {
            int x= q.front().second;
            Node * curr=q.front().first;

             if(curr!=NULL)
            {
                    q.push({curr->lefttree,x-1});
                    q.push({curr->righttree,x+1});
                    
                     if(!mp.count(x))
                    {
                        mp[x]=curr->data;
                    }
                    
            }
           

            

           
             q.pop();

        }

        cout<<"Topview of tree is:-  ";
        for(auto &it:mp)
        {
            cout<<it.second<<" ";
        }
    }
    

    void kthLevelTraversal(Node *root,int level)
    {
         queue<Node*>q;
         q.push(root);
         q.push(NULL);
         int count=1;
            while(!q.empty())
            {
                Node *curr=q.front();
                q.pop();
                if(curr==NULL)
                {
                    count++;

                    if(q.empty())break;

                    q.push(NULL);
                  
                }
                else
                {   
                    if(curr->lefttree!=NULL)
                    {
                        q.push(curr->lefttree);

                    }
                    
                    if(curr->righttree!=NULL)
                    {
                        q.push(curr->righttree);
                    }
                }

                if(count==level&&curr!=NULL)
                {
                    cout<<curr->data<<" ";
                }
            }
    }

    void kthLevelordertraversal2(Node * root,int level,int count)
    {
        if(root==NULL)
        {
            return;
        }
        if(count>level)
        {
            return;
        }
        if(count==level)
        {
            cout<<root->data<<" ";
        }

        kthLevelordertraversal2(root->lefttree,level,count+1);

        kthLevelordertraversal2(root->righttree,level,count+1);

    }

   
   bool findpath(Node * root,int target,vector<int>&path)
    {
          if(root==NULL)
          {
            return false;
          }
          path.push_back(root->data);
          if(root->data==target)
          {
             path.push_back(root->data);
              return true;
          }

          if(findpath(root->lefttree,target,path)||findpath(root->righttree,target,path))
          {
                  return true;
          }

          path.pop_back();

          return false;
          

   
    }
    int Lca1(Node * root,int n1,int n2)
    {
        vector<int>path1;
        vector<int>path2;
  
       bool n1exist= findpath(root,n1,path1);
       bool n2exist=  findpath(root,n2,path2);
       int min=path1.size()<path2.size()?path1.size():path2.size();
       int Lca;
       if(n1exist && n2exist)
       {
          for(int i=0;i<min;i++)
          {
            if(path1[i]==path2[i])
            {
               Lca=path1[i];
            }
          }

       }
       return Lca;

    }
    Node * Lca2(Node * root,int n1,int n2)
    {

        if(root==NULL)
        {
            return NULL;
        }

        if(root->data==n1||root->data==n2)
        {
            return root;
        }

        Node *left=Lca2(root->lefttree,n1,n2);
        Node *right=Lca2(root->righttree,n1,n2);
    
       if(left==NULL&&right==NULL)
       {
        return NULL;
       }

       if(left!=NULL&&right==NULL)
       {
        return left;
       }
       if(left==NULL&&right!=NULL)
       {
        return right;
       }

       if(left!=NULL&&right!=NULL)
       {

        return root;
       }
    }
int main(){
    vector<int>tree={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(tree);
   
    // TopView(root);
     kthLevelTraversal(root,4);
    
    // kthLevelordertraversal2(root,3,1);
    // cout<<Lca1(root,3,2);
   Node *lca= Lca2(root,4,6);
   cout<<"Lowest common Ancestor is-"<<lca->data;
    return 0;
}