#include<iostream>
using namespace std;
int Pivot(int arr[],int si,int ei)
{
    int pivot=ei;
    int i=si-1;
    for(int j=si;j<ei;j++)
    {
        if(arr[j]<arr[pivot])
        {   i++;
            swap(arr[i],arr[j]);
        }
    }
    ++i;
    swap(arr[i],arr[pivot]);
    return i;
}
void QuickSort(int arr[],int si,int ei)
{

    if (si>=ei)
    {
        return;
    }
    int pvidx=Pivot(arr,si,ei);//pvidx -pivot index

    Pivot(arr,si,pvidx-1);//left half
    Pivot(arr,pvidx+1,ei);//Right half

    
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main(){
    int arr[]={6,3,7,5,2,4};
    int n=sizeof(arr)/sizeof(int);
    QuickSort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}