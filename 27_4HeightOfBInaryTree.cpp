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


int main(){
    //1 tree
    vector<int>preorder1={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node *root1=buildtree(preorder1);
     
   cout<<"height of tree is:- "<<heightoftree(root1)<<endl;
 //2 tree, for this second tree i created one extra build tree function and idx2 variable
   vector<int>preorder2={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   Node *root2=buildtree2(preorder2);
   cout<<"height of tree is:- "<<heightoftree(root2)<<endl;

//3 Tree We can also create tree like this:-
   Node * root3=new Node(1);
   root3->currleft=new Node(2);
   root3->currright=new Node(3);
   root3->currleft->currleft=new Node(4);
   root3->currleft->currright=new Node(5);

    cout<<"height of tree is:- "<<heightoftree(root3)<<endl;
    return 0;
}