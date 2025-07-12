#include<iostream>
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
};static int idx=-1;
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
void Preorder(Node *root)
{    
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    Preorder(root->currleft);
    Preorder(root->currright);
}
void Inorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
     Inorder(root->currleft);
     cout<<root->data<<" ";
     Inorder(root->currright);

}
void Postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder(root->currleft);
    Postorder(root->currright);

    cout<<root->data<<" ";

}



int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);

    cout<<"Pre Order :- ";
    Preorder(root);

    cout<<endl;
    cout<<"Inorder  :- ";
    Inorder(root);

    cout<<endl;
    cout<<"Postorder :- ";
    Postorder(root);
  

    return 0;
}