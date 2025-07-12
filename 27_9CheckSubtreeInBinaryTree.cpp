#include<iostream>
#include<queue>
#include<vector>
//Diameter - a maximum distance between two nodes in a tree.
using namespace std;
class Node
{
    public:
    int data;
    Node * currleft;
    Node* currright;
    Node(int data)
    {
        this->data=data;
        currleft=currright=NULL;
    }

};

static int idx=-1;
Node * buildtree(vector<int>node)
{   
    idx++;
    if(node[idx]==-1)
    {
        return NULL;
    }
 
    Node * currnode=new Node(node[idx]);
    currnode->currleft=buildtree(node);
    currnode->currright=buildtree(node);
    return currnode;

}
bool isidentical(Node * root,Node*subroot)
{
     if(root==NULL&&subroot==NULL)
     {
        return true;
     }
     else if(root==NULL || subroot==NULL)
     {
           return false;
     }
     
     if(root->data!=subroot->data)
     {
        return false;
     }
     return isidentical(root->currleft,subroot->currleft) && isidentical(root->currright,subroot->currright);
     
}
bool isSubtree(Node *root ,Node *subroot)
{

    if(root==NULL&& subroot==NULL)
    {
        return true;
    }
    else if(root==NULL || subroot==NULL)
    {
        return false;
    }

    if (root->data==subroot->data)
    {
       if(isidentical(root,subroot))
       {
        return true;
       }
    
    }


      int isleft=isSubtree(root->currleft,subroot);
      if(!isleft)
      {
        return isSubtree(root->currright,subroot);
      }
      return true;

}


int main(){
    //1 tree
    vector<int>preorder1={1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node *root1=buildtree(preorder1);


    Node * subroot=new Node(2);
    subroot->currleft=new Node(4);
    subroot->currright=new Node(5);

    cout<<isSubtree(root1,subroot);
    return 0;
}