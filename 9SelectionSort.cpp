#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindx]>arr[j])
            {
                minindx=j;
            }

        }
        swap(arr[i],arr[minindx]);
    }
}
int main(){
     int arr[]={6,2,5,4,8,3};
     int n=sizeof(arr)/sizeof(int);
     selectionsort(arr,n);
     printarr(arr,n);
    return 0;
}