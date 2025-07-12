//Bubbles sort
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
{  
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
            }
            
        }
    }
}
int main(){
    int arr[]={5,6,2,3,1};
    int n=sizeof(arr)/sizeof(int);
    Bubblesort(arr,n);
    cout<<"sorted array is : ";
   printarr(arr,n);

    return 0;
}