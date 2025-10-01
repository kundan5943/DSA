#include<iostream>
#include<vector>
using namespace std;
class segmentTree
{ 
 
      public:
   vector<int>tree;
   vector<int>ogarr;
      segmentTree(vector<int>arr)
      { 
        ogarr=arr;

        int n=arr.size();
        tree.resize(4*n,0);
      }


      void buildTree(int node,int st,int ed)
      {
            if(st==ed)
            {
                tree[node]=ogarr[st];
                return;
            }

            int mid=(st+ed)/2;
            buildTree(2*node+1,st,mid);
            buildTree(2*node+2,mid+1,ed);

            tree[node]=tree[2*node+1]+tree[2*node+2];
           return;
      }
      void printTree()
      {
        for(int el:tree)
        {
            cout<<el<<" ";
        }
      }
};

int main(){
    vector<int>arr={0,1,2,3,4,5,6,7,8};
    segmentTree st(arr);
    int n=arr.size();
    st.buildTree(0,0,n-1);
    
    st.printTree();
    return 0;
}