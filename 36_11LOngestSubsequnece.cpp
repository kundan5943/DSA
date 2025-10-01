#include<iostream>
#include<vector>
using namespace std;
int longestSubsequence(string str1,string str2,vector<vector<int>>&dp)
{   
    
    int sz1=str1.size();
   int  sz2=str2.size();
    if(dp[sz1][sz2]!=-1)
    {
        return dp[sz1][sz2];
    }
    if(sz1==0 || sz2==0)
    {
      dp[sz1][sz2]=0;
        return 0 ;
    }

    if(str1[sz1-1]==str2[sz2-1])
    {   
        string nextstr1=str1.substr(0,sz1-1);
        string nextstr2=str2.substr(0,sz2-1);
        
      
          dp[sz1][sz2]=1+longestSubsequence(nextstr1,nextstr2,dp);
       
    }
    else
    {
      
      
        
        int ans1=longestSubsequence(str1.substr(0,sz1-1),str2,dp);
        int ans2=longestSubsequence(str1,str2.substr(0,sz2-1),dp);
          
           dp[sz1][sz2]= max(ans1,ans2);
        
    }

    return dp[sz1][sz2];


}
int main(){
    string str1="abcdg";
    string str2="abedg";
    vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,-1));
    cout<<longestSubsequence(str1,str2,dp);
    return 0;
}