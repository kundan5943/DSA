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
void PrintRange(Node *root,int st,int ed)
{
    if(root==NULL)
    {
        return;
    }
    if(st<=root->data&&ed>=root->data)
    {
        cout<<root->data<<" ";
        PrintRange(root->left,st,ed);
        PrintRange(root->right,st,ed);

    }
    else if(st>root->data)
    {
        PrintRange(root->right,st,ed);
    }
    else 
    {
        PrintRange(root->left,st,ed);

    }
}
int main(){
    int arr[7]={5,2,3,9,8,7,1};
    int size=sizeof(arr)/sizeof(int);
    Node *root=buildtree(arr,size);
  
    PrintRange(root,0,3);
    cout<<endl;
     PrintRange(root,4,8);
     cout<<endl;
      PrintRange(root,2,12);
      cout<<endl;
    return 0;
}