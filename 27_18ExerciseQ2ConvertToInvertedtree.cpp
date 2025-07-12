#include<iostream>
#include<vector>
#include<queue>
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
};static int idx=-1;
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



Node * Invertedtree(Node * root)
{
    if(root==NULL)
    {
        return NULL;

    }
     Node* temp=root->left;
     root->left=root->right;
     root->right=temp;
     
     root->left=Invertedtree(root->left);
     root->right=Invertedtree(root->right);
     return root;
}
int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);

   Node* ans=Invertedtree(root);
   levelTraversal(ans);
    return 0;
}