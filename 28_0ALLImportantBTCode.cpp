#include<iostream>
#include<vector>
#include<queue>
using namespace std;
static int indx=-1;
class Node
{
      public:
      int data;
      Node *left;
      Node *right;
      Node(int data)
      {
        this->data=data;
        left=NULL;
        right=NULL;
      }

};



Node *buildtree(vector<int>tree)
{
     indx++;
     if(tree[indx]==-1)
     {
        return NULL;
     }

     Node *currentnode=new Node(tree[indx]);
     currentnode->left=buildtree(tree);
     currentnode->right=buildtree(tree);

     return currentnode;
     
}

void levelorder(Node *root)
{

  queue<Node*>q;
  q.push(root);
  q.push(NULL);

  while(!q.empty())
  {
    Node *curr=q.front();
    q.pop();
    if(curr==NULL)
    {
       cout<<endl;
         if(!q.empty())
         {
             q.push(NULL);
         }
    }
    else
    {
        cout<<curr->data<<" ";
        
        if(curr->left!=NULL)
        {
         q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
             q.push(curr->right);
        }
        
    }
  }
}
int heightoftree(Node *root)
{
  if(root==NULL)
  {
    return 0;
  }

  int val1=heightoftree(root->left);
  int val2=heightoftree(root->right);
  
  int ans=max(val1,val2);
  return 1+ans;
}
int countnodes(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int val1=countnodes(root->left);
    int val2=countnodes(root->right);
    return 1+val1+val2;
}
int sumofnodes(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int val1=countnodes(root->left);
    int val2=countnodes(root->right);
    return root->data+val1+val2;
}

int diameteroftree(Node * root)
{
  // find the maximum diameter of tree..
  if(root==NULL)
  {
    return 0;
  }
  // there are 3 choices for each node 
  int ch1=1+heightoftree(root->left)+heightoftree(root->right);
  int ch2=diameteroftree(root->left);
  int ch3=diameteroftree(root->right);

  int maxch=max(ch1,max(ch2,ch2));
  return maxch;
}
int main(){
     vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
     Node * root=buildtree(preorder);

          indx=-1;
          vector<int>preorder1={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
          Node *root2=buildtree(preorder1);
    //  cout<<root->left->leftdata;
    //  levelorder(root);
    // int height=heightoftree(root);
    // cout<<"Height of Tree is:- "<<height-1<<endl;
    // cout<<countnodes(root2);
    // cout<<"Sum of Nodes is - "<<sumofnodes(root2);

    cout<<diameteroftree(root2);
    return 0;
}