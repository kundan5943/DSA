//this code is some extension of previous code bubble sort
#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int  i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void Bubblesort(int arr[],int n)
{   bool isswap=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isswap =true;
              
            }
            
        }
    if(isswap==false)
    {
        cout<<"Array is already sorted"<<endl;
        return;
    }      

    }
    cout<<"sorted array is : ";
    printarr(arr,n);
    
}
int main(){
    int arr[]={1,2,3,4,5,6};
    
    int n=sizeof(arr)/sizeof(int);
    Bubblesort(arr,n);
    int arr1[]={3,0,9,5,2,1};
    Bubblesort(arr1,6);
    return 0;
}