#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

/* Find Kth Ancestor Of a Node
*/
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
int KthAncestor(Node *root,int k,int n)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==n)
    {
        return 0;
    }

    int currleft=KthAncestor(root->currleft,k,n);
    int currright=KthAncestor(root->currright,k,n);
    if(currleft==-1&&currright==-1)
    {
        return -1;
    }
    if(currleft+1==k)
    {
         cout<<"Kth ancestor of node "<<n<<" is :- "<<root->data<<endl;
        return currleft+1;
    }
    else if(currright+1==k)
    {
        cout<<"Kth ancestor of node "<<n<<" is :- "<<root->data<<endl;
        return currright+1;
    }
    
    return currleft==-1?currright+1:currleft+1;
    
}



int main(){
  
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root1=buildtree(preorder);
    int n1=4;
    int n2=5;
    int K=1;

    KthAncestor(root1,K,n1);
    KthAncestor(root1,K,n2);
    KthAncestor(root1,K,6);
    KthAncestor(root1,2,6);

  
    return 0;
}