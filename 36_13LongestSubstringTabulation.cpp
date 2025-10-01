#include<iostream>
#include<vector>
using namespace std;
int LongestSubstring(string str1,string str2)
{  
    int n=str1.size();
    int m=str2.size();
    int ans=0;
 vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
   for(int i=1;i<n+1;i++)
   {
    for(int j=1;j<m+1;j++)
    {
        
    if(str1[i-1]==str2[j-1])
    {
        dp[i][j]=1+dp[i-1][j-1];

        ans=max(dp[i][j],ans);
    }
    else{
        dp[i][j]=0;
    }

    }
   }
   return ans;

   
}
int main(){
      string str1="abedg";
    string str2="abed";
   
    cout<<LongestSubstring(str1,str2);
    
   

    return 0;
}