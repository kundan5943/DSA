#include<iostream>
#include<vector>
using namespace std;
vector<int>dp;

//C2=C0*C1+C1*C0
//C3=C0*C2+C1*C1+C2*C0
//C4=C0*C3 +C1*C2 + C2*C1+ C3*C0 
int CatalanNo(int n)
{
   if(n==0||n==1)
   {
    return 1;

   }
   if(dp[n]!=-1)
   {
    return dp[n];
   }
   int result=0;
   for(int i=0;i<n;i++)
   {

     result+=CatalanNo(i)*CatalanNo(n-i-1);
   }
   dp[n]=result;
   return dp[n];
}
int main(){
    
    int n;
    cin>>n;
     dp.resize(n+1,-1);
     dp[0]=1;
     dp[1]=1;
    cout<<CatalanNo(n);

   

    
    return 0;
}