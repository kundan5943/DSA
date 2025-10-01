#include<iostream>
#include<vector>
using namespace std;

int MinimumPartitioning(vector<int>arr)
{
    int totalsum=0;
    for(auto el:arr)
    {
        totalsum+=el;
    }
    int wt=totalsum/2;
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(wt+1,0));


    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=wt;j++)
        {

            if(arr[i-1]<=j)
            {

                dp[i][j]=max(arr[i-1]+dp[i-1][j-arr[i-1]],dp[i-1][j]);
            }
            else
            {

                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int group1=dp[n][wt];
    int group2=totalsum-group1;
    int ans=abs(group1-group2);
    return ans;
}

int main(){
    vector<int>arr={1,6,11,5};
    cout<<MinimumPartitioning(arr);
    return 0;
}