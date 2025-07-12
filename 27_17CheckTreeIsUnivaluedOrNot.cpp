#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node * left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};static int idx=-1;
Node * buildtree(vector<int>node)
{   
    idx++;
    if(node[idx]==-1)
    {
        return NULL;
    }
 
    Node * currnode=new Node(node[idx]);
    currnode->left=buildtree(node);
    currnode->right=buildtree(node);
    return currnode;

}



bool CheckUnivalued(Node * root)
{
    if(root==NULL)
    {
        return true;
    }
    
   if(root->left!=NULL)
   {
      if(root->data!=root->left->data)
      {
         return false;;
      }
   }
   if(root->right!=NULL)
   {
    if(root->data!=root->right->data)
    {
        return false;
    }
   }

   return CheckUnivalued(root->left)&&CheckUnivalued(root->right);

}
int main(){
    vector<int>preorder={1,1,1,-1,-1,1,-1,-1,1,-1,1,-1,-1};
    Node *root=buildtree(preorder);

    cout<<CheckUnivalued(root);

    return 0;
}