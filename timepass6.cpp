#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node*insert(Node*root,int val)
{
     
    if(root==NULL)
    {
        Node * newnode=new Node(val);
        return newnode;
    }

    else
    {
        if(root->data<val)
        {
            root->right=insert(root->right,val);
        }
        else
        {
            root->left=insert(root->left,val);
        }

    }
    return root;

}
Node * buildtree(int arr[],int siz)
{   
    Node *root=NULL;
    for(int i=0;i<siz;i++)
    {
        root=insert(root,arr[i]);
    }
    return root;
      
}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }

   
    preorder(root->left);
     cout<<root->data<<" ";
    preorder(root->right);
    
}
int main(){
    int arr[7]={5,2,3,9,8,7,1};
    int size=sizeof(arr)/sizeof(int);
    Node *root=buildtree(arr,size);
   preorder(root);
    return 0;
}