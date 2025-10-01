#include<iostream>
#include<vector>
using namespace std;
int longestSubseuence(string str1,string str2)
{
    int n=str1.size();
    int m =str2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<n+1;i++)
    {

        for(int j=1;j<m+1;j++)
        {

            if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                  dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }

        }
        
     
    }
    for(vector<int>vec:dp)
        {
            for(int el:vec)
            {
                cout<<el<<" ";

            }
            cout<<endl;
        }
       return dp[n][m];
}

int main(){
     string  str1="abcdge";
     string str2="abedg";
     cout<<longestSubseuence(str1,str2);
    return 0;
}