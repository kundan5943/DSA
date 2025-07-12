#include<iostream>
using namespace std;
int maxdifference(int arr[],int sz)
{
    int maxdiff=-1;
    for(int i=0;i<sz;i++)
    {
        for(int j=i+1;j<sz;j++)
        {   
            int currdiff=arr[j]-arr[i];
            maxdiff=max(maxdiff,currdiff);
        }
    }
    return maxdiff;
}
int main(){
int arr[4]={1,5,2,10};
int sz=sizeof(arr)/sizeof(int);
cout<<maxdifference(arr,sz);

    return 0;
}