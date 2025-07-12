#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
 Node* balanceBstfromArray(int arr[],int st,int end)
 {
    if(st>end)
    {
        return NULL;
    }
    int mid=(st+end)/2;
    
    Node * currnode=new Node(arr[mid]);

    currnode->left=balanceBstfromArray(arr,st,mid-1);
    currnode->right=balanceBstfromArray(arr,mid+1,end);

    return currnode;
 }
 void preorder(Node *root)
 {
      
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
 }
int main(){
    int arr[]={2,3,5,6,8,9,10};
    Node*root;
    root=balanceBstfromArray(arr,0,6);
   preorder(root);
    return 0;
}

