#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class segmentTree
{  public:
    int n;
    vector<int>tree;
    vector<int>ogarr;
    segmentTree(vector<int>arr)
    {
        n=arr.size();
        ogarr=arr;
        tree.resize(4*n);
    }


    void buildtree(int st,int ed,int node)
    {

        if(st==ed)
        {
            tree[node]=ogarr[st];
            return;
        }

        int mid=(st+ed)/2;
      buildtree(st,mid,2*node+1);
      buildtree(mid+1,ed,2*node+2);

      tree[node]=max(tree[2*node+1],tree[2*node+2]);
      return;
    }

    int maxInRange(int qi,int qj,int si,int sj,int node)
    {
        if(qi>sj||qj<si)
        {
          return 0;
        }

        if(qi<=si&&qj>=sj)
        {
            return tree[node];
        }
        
        int mid=(si+sj)/2;

       long long left= maxInRange(qi,qj,si,mid,2*node+1);
       long long right=maxInRange(qi,qj,mid+1,sj,2*node+2);
      long long maxres=max(left,right);
      
      return maxres;

    }
    int maxQuery(int qi,int qj)
    {
        return maxInRange(qi,qj,0,n-1,0);
    }


  bool  updateQuery(int idx,int value,int st,int ed,int node)
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
        int mid =(st+ed)/2;
        if(    updateQuery(idx,value,st,mid,2*node+1))
        {
            tree[node]=max(tree[2*node+1],tree[2*node+2]);
            return true;
        }
        if( updateQuery(idx,value,mid+1,ed,2*node+2))
        {
            tree[node]=max(tree[2*node+1],tree[2*node+2]);
            return true;
        }
       
        tree[node]=max(tree[2*node+1],tree[2*node+2]);
        return false;

    }
    void printarr()
    {
        for(int el: tree)
        {
            cout<<el<<" ";
        }
    }


};
int main(){
    vector<int>arr={2,3,1,5,6};
    int n=5;
   segmentTree Sg(arr);
   Sg.buildtree(0,n-1,0);


// MaxQuery-
cout<<"Max elemnt between range 0 to 4:- "<<Sg.maxQuery(0,4)<<endl;
cout<<"Max elemnt between range 0 to 2:- "<<Sg.maxQuery(0,2)<<endl;
cout<<"Max elemnt between range 1 to 3:- "<<Sg.maxQuery(1,3)<<endl;
cout<<"Max elemnt between range 2 to 4:- "<<Sg.maxQuery(2,4)<<endl;


// Update index with new value
    Sg.printarr();
    cout<<endl;
    Sg.updateQuery(2,4,0,4,0);
    Sg.printarr();
    cout<<endl;
    cout<<Sg.maxQuery(2,2);
    return 0;
}