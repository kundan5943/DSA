//Counting sort
#include<iostream>
#include<climits>
using namespace std;
void printarr(int arr[],int n)
{   for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    
}
void countingsort(int arr[],int n)
{   int freq[10000];
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++)
    {
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
        freq[arr[i]]++;

    }
    for(int i=minval,j=0;i<=maxval;i++)
    {

        while(freq[i]>0)
        {
            arr[j++]=i;//
            freq[i]--;
        }
    }
       printarr(arr,n);

}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n =sizeof(arr)/sizeof(int);
    countingsort(arr,n);
 
    return 0;
}