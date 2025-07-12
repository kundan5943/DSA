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
int Sum(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftsum=Sum(root->currleft);
    int rightsum=Sum(root->currright);

    return leftsum+rightsum+root->data;
}
int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);
     
   cout<<"Sum of nodes are:- "<<Sum(root);
    return 0;
} 