#include<climits>

#include<iostream>
using namespace std;
class Node
{   
     public:
  
    int data;
    Node* left;
    Node*right;

    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
class info{
      
    public:
      bool isbst;
      int min;
      int max;
      int sz;
       
      info(bool isbst,int min ,int max,int sz)
      {
        this->isbst=isbst;
        this->min=min;
        this->max=max;
        this->sz=sz;
      }

};


info * largestbst(Node *root,int &maxsize)
 {   
    if(root==NULL)
    {
        return new info(true,INT_MAX,INT_MIN,0);
    }
    info*leftinfo=largestbst(root->left,maxsize);
    info *rightinfo=largestbst(root->right,maxsize);

    int currmin=min(root->data,min(leftinfo->min,rightinfo->min));
    int currmax=max(root->data,max(leftinfo->max,rightinfo->max));

    int currsz=leftinfo->sz+rightinfo->sz+1;
  
    
    if(leftinfo->isbst&&rightinfo->isbst&&root->data > leftinfo->max&&root->data < rightinfo->min)
    {
        maxsize=max(maxsize,currsz);
        return new info(true,currmin,currmax,currsz);
        
        
    }

    return new info(false,currmin,currmax,currsz);


}

int main() {
    Node *root = new Node(50);

    root->left = new Node(30);
    root->left->left = new Node(5);
   root->left->right = new Node(20); 

    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right= new Node(80);

    int maxsize=0;
    largestbst(root,maxsize);
    cout << "maxsize :- " << maxsize << endl;
    
    return 0;
}
