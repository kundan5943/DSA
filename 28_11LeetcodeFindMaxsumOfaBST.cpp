#include<climits>
#include<iostream>
using namespace std;
//find the maximum sum of a bst when the bst is valid ,subtree is also allowed.

/*Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 */
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
class info{
      
    public:
      bool isbst;
      int min;
      int max;
      int sum;
      
    
       
      info(bool isbst,int min ,int max,int sum)
      {
        this->isbst=isbst;
        this->min=min;
        this->max=max;
        this->sum=sum;
       
      }

};

int sum(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int res1=sum(root->left);
    int res2=sum(root->right);

    return res1+res2+root->data;

}
info * MaxSumbst(Node *root,int &maxsum)
 {   
    if(root==NULL)
    {
        return new info(true,INT_MAX,INT_MIN,0);
    }
    info*leftinfo=MaxSumbst(root->left,maxsum);
    info *rightinfo=MaxSumbst(root->right,maxsum);

    int currmin=min(root->data,min(leftinfo->min,rightinfo->min));
    int currmax=max(root->data,max(leftinfo->max,rightinfo->max));
    int currsum=leftinfo->sum+rightinfo->sum+root->data;
    
    if(leftinfo->isbst&&rightinfo->isbst&&root->data > leftinfo->max&&root->data < rightinfo->min)
    {   
        
        maxsum=max(maxsum,currsum);
        return new info(true,currmin,currmax,currsum);
        
        
    }
    else{

    return new info(false,currmin,currmax,currsum);
    
    }


}

int main() {
    Node *root = new Node(50);

    root->left = new Node(30);
    root->left->left = new Node(5);
   root->left->right = new Node(20); 

    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right= new Node(80);

    int maxsum=0;
    MaxSumbst(root,maxsum);
    cout << "maxsum :- " << maxsum << endl;
    
    return 0;
}
