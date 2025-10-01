#include<iostream>
#include<vector>

using namespace std;
class Node 
{
    public:

    int data;
    Node *left;
    Node*right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
static int indx=-1;
Node * buildtree(vector<int>tree)
{

    indx++;
    if(tree[indx]==-1)
    {
        return NULL;
    }

    Node * currentnode=new Node(tree[indx]);
    currentnode->left=buildtree(tree);
    currentnode->right=buildtree(tree);

    return currentnode;
}
bool isIdentical(Node * rt1,Node*rt2)
{
    if(rt1==NULL&&rt2==NULL)
    {
        return true;
    }
    if(rt1==NULL&&rt2!=NULL ||rt1!=NULL&&rt2==NULL)
    {
        return false;
    }
    if(rt1->data==rt2->data)
    {
          bool left =isIdentical(rt1->left,rt2->left);
          bool right=isIdentical(rt1->right,rt2->right);
          return left&&right;
    }
    else{
        return false;
    }
    
}
bool isPresent(Node *rt1,Node *rt2)
{
    if(rt1==NULL&&rt2==NULL)
    {
        return true;
    }
    if(rt1==NULL&&rt2!=NULL ||rt1!=NULL&&rt2==NULL)
    {
        return false;
    }

    if(rt1->data==rt2->data)
    {
        if(isIdentical(rt1,rt2))
        {
              return true;
        }
    }

    bool left=isPresent(rt1->left,rt2);
    bool right=isPresent(rt1->right,rt2);

    return left || right;

}
int main(){
      vector<int>binarytree={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       Node * root1=buildtree(binarytree);
    
       indx=-1;
       vector<int>subtree={3,-1,6,-1,-1};
       Node * root2=buildtree(subtree);

       bool result=isPresent(root1,root2);
       
     cout<<(result?"true":"false");

    return 0;
}