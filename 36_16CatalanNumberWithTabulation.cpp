#include<iostream>
#include<vector>
using namespace std;
int catalanNo(int n)
{
    vector<int>dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;


    for(int i=2;i<=n;i++)
    {
        int result=0;

        for(int j=0;j<i;j++)
        {
            result+=dp[j]*dp[i-j-1];

        }
        dp[i]=result;
    }

    return dp[n];
}
int main(){
     int n=3;
     cout<<catalanNo(n);

    return 0;
}