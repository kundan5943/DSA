#include<iostream>
using namespace std;
class Node
{    
    public:

    int data;
    Node*left;
    Node *right;

    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }

};
Node *insert(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
        
    }

    if(val>root->data)
    {
        root->right=insert(root->right,val);
    }
    else
    {
        root->left=insert(root->left,val);
    }

    return root;
}
Node *Buildtree(int arr[],int n)
{
    Node *root=NULL;
    for(int i=0;i<n;i++)
    {
        root=insert(root,arr[i]);
    }
    return root;
}
void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * InorderSucc(Node * root)
{
      while(root->left!=NULL)
      {
        root=root->left;
      }
      return root;
}
Node *DeleteNode(Node * root,int key)
{    
    if(root==NULL)
    {
        return NULL;
    }
     if(key<root->data)
     {
        root->left=DeleteNode(root->left,key);
     }
     else if(key>root->data)
     {
        root->right=DeleteNode(root->right,key);
     }
     else
     {
        //case1 :-0 children
        if(root->left==NULL&&root->right==NULL)
        {   
            delete root;
            return NULL;
        }

        //case2:-1 children
        if(root->right==NULL||root->left==NULL)
        {    
            return root->left==NULL?root->right:root->left;
        }
        //case 3:- 2 Children
        
        Node * IS=InorderSucc(root->right);
        root->data=IS->data;
        root->right=DeleteNode(root->right,IS->data);

     }
}
int main(){
    int arr[6]={5,1,3,4,2,7};
    int n=sizeof(arr)/sizeof(int);
    Node* root=Buildtree(arr,n);
    inorder(root);
     cout<<endl;
     
    DeleteNode(root,3);
    inorder(root);
    
    return 0;
}