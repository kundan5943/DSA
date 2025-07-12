#include<iostream>
#include<vector>
using namespace std;
void heapify(int i,vector<int>&arr,int n)
{
    int left=2*i+1;
    int right=2*i+2;
    int mini=i;

    if(left<n&&arr[left]<arr[mini])
    {
        mini=left;
    }
    if(right<n&&arr[right]<arr[mini])
    {
        mini=right;
    }

    if(i!=mini)
    {
        swap(arr[i],arr[mini]);
        heapify(mini,arr,n);
    }


}
void HeapSort(vector<int> &arr)
{   
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--)
    {
        /*this loop simply convert CBT to max heap by using heapify(max heap logic is written there we can also change it to minheap)function
         
        */
      heapify(i,arr,n);
    }
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }
}
int main(){
    vector<int>arr={2,1,5,3,4};

   HeapSort(arr);
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i];
}
    return 0;
}