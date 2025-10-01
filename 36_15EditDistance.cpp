#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int editDistance(string str1,string str2)
{
    vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
    for(int i=0;i<=str1.size();i++)
    {
        dp[i][0]=i;
        
    }
    for(int j=0;j<=str2.size();j++)
    {
        dp[0][j]=j;
    }
     
    
    for(int i=1;i<=str1.size();i++)
    {
        for(int j=1;j<=str2.size();j++)
        {   
            
            if(str1[i]==str2[j])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                /*insert-dp[i][j-1],
                delete-dp[i-1][j]
                replace-dp[i-1][j-1] its same as equal string but here we need 1 opearation but when a string last char is equal then we need only one operation*/
                dp[i][j]=1+min(dp[i][j-1] ,min(dp[i-1][j],dp[i-1][j-1]));

            }

        }
    }

    for(vector<int>vec1:dp)
    {
        for( int el:vec1)
        {
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return dp[str1.size()][str2.size()];
}
int main(){
    string str1="horse";
    string str2="ros";
   editDistance(str1,str2);
    return 0;
}