#include<iostream>
#include<queue>
#include<map>
#include<vector>
/*As compares to previous code of LCA that i done in which i find  two path for n1 and n2 for that we created two vector
so the space complexity is Big O(n) and time complexity is Big O(n). 
*/
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
bool rootTonode(Node *root,int n,vector<int> &path)
{
      if(root==NULL)
      {
        return false;
      }
      path.push_back(root->data);
      if(root->data==n)
      {
        return true;
      }
      
     int left=rootTonode(root->currleft,n,path);
     int right=rootTonode(root->currright,n,path);
     
     if(left||right)
     {
         return true;
     }
     
     path.pop_back();
     return false;
     
}
int LCA(Node * root,int n1,int n2)
{
    vector<int>path1;
    vector<int>path2;

    rootTonode(root,n1,path1);
    rootTonode(root,n2,path2);
    int lca=-1;
    for(int i=0,j=0;i<path1.size()&&j<path2.size();i++,j++)
    {
        if(path1[i]!=path2[i])
        {
          return lca;
        }
        lca=path1[i];

    }
    return lca;
   
}


int main(){
  
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root1=buildtree(preorder);
    int n1=4;
    int n2=6;
    cout<<LCA(root1,n1,n2);
  
  
    return 0;
}