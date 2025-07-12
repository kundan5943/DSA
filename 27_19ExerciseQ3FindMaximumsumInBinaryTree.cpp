#include<iostream>
#include<queue>
#include<climits>
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
int maxsum=INT_MIN;
int MaxSumofPath(Node *root)
{
    if (root ==NULL)
    {
        return 0;
    }
    int leftsum=MaxSumofPath(root->left);
    int rightsum=MaxSumofPath(root->right);

    int currsum=leftsum+rightsum+root->data;

    maxsum=max(maxsum,max(currsum,max(leftsum,rightsum)));
    return maxsum;
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

int main(){
    vector<int>preorder={-10,9,-1,-1,20,15,-1,-1,7,-1,-1};
    Node *root=buildtree(preorder);

    levelTraversal(root);
    cout<<MaxSumofPath(root);
  

    return 0;
}