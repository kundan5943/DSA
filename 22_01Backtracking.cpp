#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void backtrack(int arr[],int i,int n)
{
    if(i==n)
    {
       return printarr(arr,n);

    }
    arr[i]=i+1;
    backtrack(arr,i+1,n);
    arr[i]=arr[i]-2;

   
}
int main(){
    int arr[5];
    int n=5;
    backtrack(arr,0,n);
    cout<<endl;
    printarr(arr,n);
    
    return 0;
}