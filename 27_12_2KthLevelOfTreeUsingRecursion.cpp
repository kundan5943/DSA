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
void  kthhelper(Node *root,int k,int currlevel)
{
    if(root==NULL)
    {
        return;
    }
    if(k<currlevel)
    {
        return;
    }
    if(k==currlevel)
    {
        cout<<root->data<<" ";
    }
    kthhelper(root->currleft,k,currlevel+1);
    kthhelper(root->currright,k,currlevel+1);

}
void Kthlevel(Node * root,int k)
{
     kthhelper(root,k,1);
     cout<<endl;
}

int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);
     
    int k=1;
    cout<<k<<" level of tree is :-  ";
    Kthlevel(root,k);//For level 1

    int k1=2;
     cout<<k1<<" level of tree is :-  ";
    Kthlevel(root,k1);//For level 2

     int k2=3;
     cout<<k2<<" level of tree is :-  ";
    Kthlevel(root,k2);//For level 3
    return 0;
}