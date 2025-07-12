//OPtimized way find min and max sum of subarray
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={-2,-3,};
    int n=sizeof(arr)/sizeof(int); 
    int maxsum=INT_MIN;
    int minsum=INT_MAX;
    int currsum;
    for(int st =0;st<n;st++)
    {   currsum=0;
        for(int end=st;end<n;end++)
        {
           currsum+=arr[end];
           maxsum=max(maxsum,currsum);
          cout<<maxsum;
           minsum=min(minsum,currsum);
        }

    }
    cout<<"Maxsum of subarray is :"<<maxsum<<endl;
    cout<<"Minsum of subarray is :"<<minsum<<endl;
    return 0;
}6,-5,4,2