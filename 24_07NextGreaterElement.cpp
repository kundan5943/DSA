#include<iostream>
#include<stack>
using namespace std;
void NextGreaterElement(int arr[],int ans[],int n)
{
     stack<int>s;
     ans[n-1]=-1;
     s.push(arr[n-1]);
     for(int i=n-2;i>=0;i--)
     {
        int curr=arr[i];
        while(!s.empty() && curr>=s.top())
        {
            s.pop();
        }

        if(s.empty())
        {
            ans[i]=-1;
        }
        else
        {
            int nexthigh=s.top();
            ans[i]=nexthigh;
        }
        s.push(arr[i]);
     }

     for(int i=0;i<n;i++)
     {
        cout<<ans[i]<<" ";

     }

}
int main(){
    int arr[7]={6,8,0,10,2,9,1};
    int ans[7];
    int n=sizeof(arr)/sizeof(int);
   
    NextGreaterElement(arr,ans,n);
    return 0;
}