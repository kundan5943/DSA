#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;//previous index
        while(prev>=0 && arr[prev]>curr)
        {
           arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
        
    }

}
int main(){
    int arr1[]={5,4,1,3,2};
    int n1=sizeof(arr1)/sizeof(int);
    Insertionsort(arr1,n1);
    printarr(arr1,n1);


    int arr2[]={6,8,3,9,4,2,1};//This is second array for better understanding
    int n2=sizeof(arr2)/sizeof(int);
    Insertionsort(arr2,n2);
    printarr(arr2,n2);
    return 0;
}