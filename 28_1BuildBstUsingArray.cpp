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
int main(){
    int arr[6]={5,1,3,4,2,7};
    int n=sizeof(arr)/sizeof(int);
    Node* root=Buildtree(arr,n);
    inorder(root);
 cout<<endl;

   int arr2[8]={8,9,1,3,4,6,7,10};
    int n2=sizeof(arr2)/sizeof(int);
    Node* root1=Buildtree(arr2,n2);
    inorder(root1);
    return 0;
}