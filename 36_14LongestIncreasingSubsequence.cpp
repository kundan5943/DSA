#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int LongestSubsequence(vector<int>ogarr,vector<int>sarr)
{    
   int n=ogarr.size();
   int m=sarr.size();
 
    vector<vector<int>>dp(n+1,vector<int>(m+1,0)) ;

    for(int i=1;i<n+1;i++)
    {
      for(int j=1;j<m+1;j++)
      {

         if(ogarr[i-1]==sarr[j-1])
         {
            dp[i][j]=1+dp[i-1][j-1];

         }
         else
         {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

         }
      }
    }
    return dp[n][m];

}
int main(){
    
   vector<int>ogarr={50,3,10,7,40,80};
      unordered_set<int>s(ogarr.begin(),ogarr.end());
   vector<int>sarr(s.begin(),s.end());//it created to store Sorted array with unique values
  
  sort(sarr.begin(),sarr.end());
  cout<<LongestSubsequence(ogarr,sarr);
  
    return 0;
}