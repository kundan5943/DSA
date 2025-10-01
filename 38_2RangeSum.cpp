#include<iostream>
#include<vector>
using namespace std;
class segmentTree
{     
    int n;
      void buildTree(int st,int ed,int node)
    {
         
         if(st==ed)
         {
            tree[node]=ogarr[st];
            return;
         }
         int mid =(st+ed)/2;
         buildTree(st,mid,2*node+1);
         buildTree(mid+1,ed,2*node+2);
         tree[node]=tree[2*node+1]+tree[2*node+2];
         return;
    }
    public:
    vector<int>tree;
    vector<int>ogarr;
    segmentTree(vector<int>vec)
    {   
        ogarr=vec;
         n =vec.size();
        tree.resize(4*n,0);
        buildTree(0,n-1,0);
    }

  
     void printTree()
      {
        for(int el:tree)
        {
            cout<<el<<" ";
        }
      }
     int rangeSum(int qi,int qj,int si,int sj, int node )
     {
        if(qi>sj||qj<si)// No overlap
        {
            return 0;
        }

        if(qi<=si&&sj<=qj)//Complete Overlap
        {
            return tree[node];
        }

       int mid =(si+sj)/2;

       return rangeSum(qi,qj,si,mid,2*node+1)+rangeSum(qi,qj,mid+1,sj,2*node+2);

        
     }
     int rangeQuery(int qi,int qj)
     {
        return rangeSum(qi,qj,0,n-1,0);
     }
bool helper(int idx,int value,int st,int ed,int node)
    {   
        if(st==idx&&ed==idx)
        {
            tree[node]=value;
             return true;
        }
       
        if(st==ed)
        {
            return false;
        }
        int mid=(st+ed)/2;
       if( helper(idx,value,st,mid,2*node+1))
       {
          tree[node]= tree[2*node+1] +tree[2*node+2];
          return true;
       }

       if(helper(idx,value,mid+1,ed,2*node+2))
       {
           tree[node]= tree[2*node+1] +tree[2*node+2];
        return true;
       }

       return false;
        
     

    }
    void updateindx(int idx,int value)
     {
        helper(idx,value,0,n-1,0);
     }


};
int main(){
    vector<int>arr={2,3,1,5,6};
    segmentTree st(arr);
    int n=arr.size();
   
    // cout<<st.rangeQuery(0,7);
    st.updateindx(3,2);
     cout<<st.rangeQuery(3,4);
    return 0;
}