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
static int count=1;
void Kthleveltree(Node * root,int k)
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
           
            if(Q.empty())
            {
                break;
            }
            count++;
            Q.push(NULL);
        }

        else{
           
            if(k==count)
            {
                cout<<curr->data<<" ";
            }
            
        if(curr->currleft!=NULL)
        {
            Q.push(curr->currleft);
        }
        if(curr->currright!=NULL)
        {
            Q.push(curr->currright);
        }

         }
      }
      cout<<endl;

}


int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root=buildtree(preorder);
     
    int k=2;
    cout<<"Kth level of tree is :-  ";
    Kthleveltree(root,k);
    return 0;
}