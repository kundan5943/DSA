#include<iostream>
#include<vector>
using namespace std;
int UnboundedKnapsack(vector<int>val,vector<int>wt,int W,int n)
{
    vector<vector<int>>ds(n+1,vector<int>(W+1,0));

     
    for(int i=1;i<n+1;i++)
    {
        int itemval=val[i-1];
        int itemwt=wt[i-1];
        for(int j=1;j<W+1;j++)
        {
             if(itemwt<=j)
             {


                ds[i][j]=max(itemval+ds[i][j-itemwt],ds[i-1][j]);

             }
             else
             {
                ds[i][j]=ds[i-1][j];
             }
        }

    }
    return ds[n][W];
}
int main(){
vector<int>vec={15,14,10,45,30};
vector<int>wt={2,5,1,3,4};
    int W=7;
    int n=vec.size();
    cout<<UnboundedKnapsack(vec,wt,W,n);

    
    return 0;
}