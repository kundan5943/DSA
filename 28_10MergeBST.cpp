#include<iostream>
#include<vector>
using namespace std;
class Node
{    
    public:

    int data;
    Node*left;
    Node *right;

    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }

};
Node *insert(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
        
    }

    if(val>root->data)
    {
        root->right=insert(root->right,val);
    }
    else
    {
        root->left=insert(root->left,val);
    }

    return root;
}
Node *Buildtree(int arr[],int n)
{
    Node *root=NULL;
    for(int i=0;i<n;i++)
    {
        root=insert(root,arr[i]);
    }
    return root;
}

void getInorder(Node *root,vector<int> &vec)
 {  
    if(root==NULL)
    {
        return;
    }

      
      getInorder(root->left,vec);
      vec.push_back(root->data);
      getInorder(root->right,vec);

 }
Node* balanceBstfromBinarytree(vector<int> vec1,int st,int end)
 {
    if(st>end)
    {
        return NULL;
    }
    int mid=(st+end)/2;
    
    Node * currnode=new Node(vec1[mid]);

    currnode->left=balanceBstfromBinarytree(vec1,st,mid-1);
    currnode->right=balanceBstfromBinarytree(vec1,mid+1,end);

    return currnode;
 }
Node * Merge(Node *root1,Node * root2)
{
      vector<int>node1;
      vector<int>node2;
      
      getInorder(root1,node1);
      getInorder(root2,node2);
     int i=0;
     int j=0;
     vector<int>Merged;
      while(i<node1.size()&&j<node2.size())
      {
        if(node1[i]<node2[j])
        {
           Merged.push_back(node1[i++]);
        }
        else{
            Merged.push_back(node2[j++]);
        }

      }
      while(i<node1.size())
      {
        Merged.push_back(node1[i++]);
      }
      while(j<node2.size())
      {
         
        Merged.push_back(node2[j++]);
      }
     
      return balanceBstfromBinarytree(Merged,0,Merged.size()-1);

}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[6]={5,1,83,49,25,7};
    int n=sizeof(arr)/sizeof(int);
    Node* root1=Buildtree(arr,n);


   int arr2[6]={8,9,6,12,15,20};
    int n2=sizeof(arr2)/sizeof(int);
    Node* root2=Buildtree(arr2,n2);

   Node *root3=Merge(root1,root2);
   preorder(root3);
    return 0;
}