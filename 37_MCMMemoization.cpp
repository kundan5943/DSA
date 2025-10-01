#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int Mcm(vector<int>&vec,int i,int j,vector<vector<int>>&dp)
{
    if(i==j)
    {
        return 0;
    }

    int ans=INT_MAX;
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    for(int k=i;k<j;k++)
    {
        
        int set1=Mcm(vec,i,k,dp);
        int set2=Mcm(vec,k+1,j,dp);

        int currans=set1+set2+(vec[i-1]*vec[k]*vec[j]);
        ans=min(currans,ans);
    }

    return dp[i][j]=ans;
}
int main(){
   vector<int>vec={1,2,3,4,3};
    int n=vec.size();
     vector<vector<int>>dp(n,vector<int>(n,-1));
    cout<<Mcm(vec,1,n-1,dp);

    return 0;
}