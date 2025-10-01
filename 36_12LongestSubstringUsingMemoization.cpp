#include<iostream>
#include<vector>
using namespace std;

int LongestSubstring(string str1,string str2,vector<vector<int>>&dp)
{
    int n=str1.size();
    int m=str2.size();
    if(dp[n][m]!=-1)
    {
      return dp[n][m];
    }

     if(str1.size()==0|| str2.size()==0)
     {
        return 0;
     }

     if(str1[n-1]==str2[m-1])
     {
      
       dp[n][m]=1+ LongestSubstring(str1.substr(0,n-1),str2.substr(0,m-1),dp);
  
     }
     else
     {
        dp[n][m]=0;
     }
     LongestSubstring(str1.substr(0,n-1),str2,dp);
     LongestSubstring(str1,str2.substr(0,m-1),dp);
     return dp[n][m];


}
int main(){

    string str1="abedg";
    string str2="abe";
    vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,-1));
    cout<<LongestSubstring(str1,str2,dp);
    int count=0;
    for(vector<int>vec:dp)
    {
      for(int el:vec )  
    {

      count=max(count,el);
      
    }
      }
    cout<<count;
   
    return 0;
}