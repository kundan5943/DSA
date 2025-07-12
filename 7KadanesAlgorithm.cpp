//KADANE'S ALGORITHM for finding maximum sum of subarray or minimum subarray

#include<iostream>
#include<climits>//it is use for INT_MIN and INT_MAX
using namespace std;
void maxsubarraysum(int arr[],int n)
{   int maxsum=INT_MIN; 
    int currsum=0;
     for(int i=0;i<n;i++)
     {    currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if (currsum<0)
        {
            currsum=0;
        }
       
     }
     cout<<"Maximum subarray sum = "<<maxsum<<endl;
}
void minsubarraysum(int arr[],int n)//For minimum subarray
{   int minsum=INT_MAX; 
    int currsum=0;
     for(int i=0;i<n;i++)
     {    currsum+=arr[i];
        minsum=min(minsum,currsum);
        if (currsum>0)
        {
            currsum=0;
        }
       
     }
     cout<<"Minimum subarray sum = "<<minsum<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
    minsubarraysum(arr,n);
    return 0;
}