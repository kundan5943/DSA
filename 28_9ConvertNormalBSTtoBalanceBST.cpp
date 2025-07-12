#include<climits>
#include<vector>
#include<iostream>
using namespace std;
class Node
{   
     public:
  
    int data;
    Node* left;
    Node*right;

    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
Node* balanceBstfromBinarytree(vector<int> vec1,int st,int end)
 {
    if(st>end)
    {
        return NULL;
    }
    int mid=(st+end)/2;
    
    Node * currnode=new Node(vec1[mid]);

    currnode->left=balanceBstfromBinarytree(vec1,st,mid-1);
    currnode->right=balanceBstfromBinarytree(vec1,mid+1,end);

    return currnode;
 }
 void getInorder(Node *root,vector<int> &vec)
 {  
    if(root==NULL)
    {
        return;
    }

      
      getInorder(root->left,vec);
      vec.push_back(root->data);
      getInorder(root->right,vec);

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
int main() {
    Node *root = new Node(50);

    root->left = new Node(30);
    root->left->left = new Node(25);
   root->left->left->left = new Node(20); 

    root->right = new Node(60);
    root->right->right = new Node(65);
    root->right->right->right = new Node(70);
    root->right->right->left = new Node(63);
   
   cout<<"Preorder of NormalBST- ";
   preorder(root);
     cout<<endl;
    vector<int> vec;
    Inorder(root,vec);
    
    root=balanceBstfromBinarytree(vec,0,vec.size()-1);
   cout<<"Preorder of balanceBST- ";
   preorder(root);
    return 0;
}
