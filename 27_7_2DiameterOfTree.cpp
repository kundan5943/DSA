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


pair<int,int> diameter(Node *root)
{
    if (root==NULL)
    {
        return make_pair(0,0);
    }
    
    pair<int,int> leftdiam=diameter(root->currleft);
    pair<int,int> rightdiam=diameter(root->currright);
    
    int currdiam=(leftdiam.second+rightdiam.second)+1;

    int finaldiam=max(currdiam,max(leftdiam.first,rightdiam.first));
    int finalheight=max(leftdiam.second,rightdiam.second)+1;
    return make_pair(finaldiam,finalheight);
}
int main(){
    //1 tree
    vector<int>preorder1={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node *root1=buildtree(preorder1);
    pair<int,int> ans=diameter(root1);
     cout<<"Diameter is:-"<<ans.first;
 
    return 0;
}