#include<iostream>
#include<queue>
#include<vector>
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
static int count=0;
int CountNode(Node * root)
{
    if (root==NULL)
    {
        return 0;
    }
    int leftcou=CountNode(root->currleft);
    int rightcou=CountNode(root->currright);
    return leftcou+rightcou+1;


}
int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);
     
   cout<<"Total nodes are:- "<<CountNode(root);
    return 0;
}