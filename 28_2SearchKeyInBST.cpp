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
bool SearchKey(Node *root,int key)
{
    if(root==NULL)//base case
    {
        return false;
    }
    
    if(root->data==key)//work
    {
        return true;
    }

    if(root->data>key)//leftcall
    {
        return SearchKey(root->left,key);
    }
    else//rightcall
    {
        return SearchKey(root->right,key);

    }
}
int main(){
    int arr[6]={5,1,3,4,2,7};
    int n=sizeof(arr)/sizeof(int);
    Node* root=Buildtree(arr,n);
    int key= 6;
    cout<<SearchKey(root,key);
   
    return 0;
}