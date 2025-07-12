#include<iostream>
#include<queue>
#include<map>
#include<vector>
/*Minimum Distance Between Nodes
1.firstly find Lowest closest Ancestor because every minimum distance between two nodes is going through LCA 
so find LCA 
2.after that From LCA node find distance for n1 and distance for n2(create one function for finding distance from LCA to N1 or N2)
3.Then just add distance 1 and distance 2 and return it .abort*/
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




Node * LCA(Node*root,int n1,int n2)
{      
    if(root==NULL)
    {
        return NULL;
    }

       if(root->data==n1||root->data==n2)
       {
            return root;
       }
       
       Node *leftLCA=LCA(root->currleft,n1,n2);
       Node *rightLCA=LCA(root->currright,n1,n2);

      if(leftLCA!=NULL && rightLCA!=NULL)
      {
        return root;
      }

      return leftLCA==NULL?rightLCA:leftLCA;


}
int dist(Node *root,int n)
{   
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==n)
    {
        return 0;
    }

    int currleft=dist(root->currleft,n);

    if(currleft!=-1)
    {
        return currleft+1;
    }

    int currRight=dist(root->currright,n);
    if(currRight!=-1)
    {
        return currRight+1;
    }
    return -1;
}
int Mindist(Node * root,int n1,int n2)
{
    Node *lca=LCA(root,n1,n2);

    int dist1 =dist(lca,n1);
    int dist2 =dist(lca,n2);
    

    return dist1+dist2;
}

int main(){
  
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root1=buildtree(preorder);
    int n1=4;
    int n2=5;
    cout<<"The Minimum Distance is - "<<Mindist(root1,n1,n2)<<endl;

    cout<<"The Minimum Distance is - "<<Mindist(root1,4,6)<<endl;
  
    return 0;
}