#include<iostream>
#include<vector>
using namespace std;
int Knapsack(vector<int>vec,vector<int>wt,int W,int n,vector<vector<int>>&ds)
{
        if(n==0 || W<=0)
        {
            return 0;
        }
  
    if(ds[n][W]!=-1)
    {
        return ds[n][W];
    }
        
        int itemval=vec[n-1];
        int itemwt=wt[n-1];

        if(W>=itemwt)
        {
            //Include
            int ans1=Knapsack(vec,wt,W-itemwt,n-1,ds)+itemval;

            //exclude
            int ans2=Knapsack(vec,wt,W,n-1,ds);
            
            ds[n][W]= max(ans1,ans2);
            return  ds[n][W];
        }
        else
        {
            return Knapsack(vec,wt,W,n-1,ds);
        }

       
    }
int main(){
vector<int>vec={15,14,10,45,30};
vector<int>wt={2,5,1,3,4};
    int W=7;
vector<vector<int>>ds(vec.size()+1,vector<int>(W+1,-1));


cout<<Knapsack(vec,wt,W,vec.size(),ds);
cout<<endl;

for(vector<int>vec:ds)
{
    for(int el:vec)
    {
        cout<<el<<" ";
    }
    cout<<endl;
}
return 0;
}