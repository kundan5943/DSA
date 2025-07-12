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
static int idx2=-1;
Node * buildtree2(vector<int>node)/*this two build tree function are same i just write two different name
 function for creating one more tree in same program*/
{   
    idx2++;
    if(node[idx2]==-1)
    {
        return NULL;
    }
 
    Node * currnode=new Node(node[idx2]);
    currnode->currleft=buildtree2(node);
    currnode->currright=buildtree2(node);
    return currnode;

}
static int currht=0;
int heightoftree(Node * root)
{   
    if(root==NULL)
    {
        return 0;
    }
    int lefht=heightoftree(root->currleft);//Left height
    int rightht=heightoftree(root->currright);//Rigth height 
    
    currht=max(lefht,rightht)+1;
    
    return currht;

}

int diameter(Node *root)
{
    if (root==NULL)
    {
        return 0;
    }

    int currdiam=heightoftree(root->currleft)+heightoftree(root->currright)+1;
    int leftdiam=diameter(root->currleft);
    int rightdiam=diameter(root->currright);
    
    int ans=max(currdiam,max(leftdiam,rightdiam));
    return ans;
}
int main(){
    //1 tree
    vector<int>preorder1={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node *root1=buildtree(preorder1);
    
     cout<<"Diameter is:-"<<diameter(root1);
 
    return 0;
}