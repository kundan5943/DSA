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
    
       
      info(bool isbst,int min ,int max)
      {
        this->isbst=isbst;
        this->min=min;
        this->max=max;
       
      }

};

int sum(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int res1=sum(root->left);
    int res2=sum(root->right);

    return res1+res2+root->data;

}
info * MaxSumbst(Node *root,int &maxsum)
 {   
    if(root==NULL)
    {
        return new info(true,INT_MAX,INT_MIN);
    }
    info*leftinfo=Maxsumbst(root->left,maxsum);
    info *rightinfo=Maxsumbst(root->right,maxsum);

    int currmin=min(root->data,min(leftinfo->min,rightinfo->min));
    int currmax=max(root->data,max(leftinfo->max,rightinfo->max));
    
    
    if(leftinfo->isbst&&rightinfo->isbst&&root->data > leftinfo->max&&root->data < rightinfo->min)
    {   
        int currsum=sum(root);
        maxsum=max(maxsum,currsum);
        return new info(true,currmin,currmax);
        
        
    }

    return new info(false,currmin,currmax);


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
