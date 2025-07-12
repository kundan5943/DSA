#include<iostream>
#include<queue>
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
    currnode->left=buildtree(node);
    currnode->right=buildtree(node);
    return currnode;

}
void levelTraversal(Node * root)
{
    if(root==NULL)
    {
        return;
    }
      queue<Node*>Q;
      Q.push(root);
      Q.push(NULL);

      while(!Q.empty())
      {
        
        Node *curr=Q.front();
       
        Q.pop();

        if(curr==NULL)
        {
            cout<<endl;
            if(Q.empty())
            {
                break;
            }
            Q.push(NULL);
        }

        else{

            cout<<curr->data<<" ";
        if(curr->left!=NULL)
        {
            Q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            Q.push(curr->right);
        }

         }
      }
      cout<<endl;

}
int Transform(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int oldleft=Transform(root->left);
    int oldright=Transform(root->right);
    int currold= root->data;

    root->data=oldleft+oldright;
    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }

    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }

    return currold;
}

int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);

    cout<<"Before Transform of tree to sum of tree:-"<<endl;
    levelTraversal(root);
     Transform(root);
     cout<<"Before Transformof tree to sum of tree:-"<<endl;
    levelTraversal(root);

    return 0;
}