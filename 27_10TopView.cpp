#include<iostream>
#include<queue>
#include<map>
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

void Topview(Node * root)
{
     queue<pair<Node*,int >>Q;//(node*,horizntal distance)
     map<int,int>m;//(HD,node data)
     
     Q.push(make_pair(root,0));
    
     while(!Q.empty())
     {
        pair<Node*,int>curr=Q.front();
        Q.pop();


        Node *currNode=curr.first;
        int currhd=curr.second;

        if(m.count(currhd)==0)
        {
            m[currhd]=currNode->data;
        }

        if(currNode->currleft!=NULL)
        {
                pair<Node*,int>left=make_pair(currNode->currleft,currhd-1);
                Q.push(left);
        }
        if(currNode->currright!=NULL)
        {
            pair<Node*,int>right=make_pair(currNode->currright,currhd+1);
            Q.push(right);
        }

     }
      for(auto it:m)
        {
            cout<<it.second<<" ";
        }

}


int main(){
  
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root1=buildtree(preorder);

    Topview(root1);
  
  
    return 0;
}