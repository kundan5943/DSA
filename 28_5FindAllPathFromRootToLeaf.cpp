#include<iostream>
#include<queue>
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
void LeafPaths(Node *root,queue<int>q1)
{   
    if(root==NULL)
    {
        return;
    }
    q1.push(root->data);
    if(root->left==NULL&&root->right==NULL)
    {   
        queue<int> temp=q1;
        while(!temp.empty())
        {
             cout<<temp.front()<<" ";
             temp.pop();
        }
        cout<<endl;
       
        q1.pop();

       return;
    }
  

    
    LeafPaths(root->left,q1);
    LeafPaths(root->right,q1);
    

}
int main(){
    int arr[6]={5,1,3,4,2,7};
    int n=sizeof(arr)/sizeof(int);
    Node* root=Buildtree(arr,n);
    queue<int> q1;
    LeafPaths(root,q1);
    return 0;
}