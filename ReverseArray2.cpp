//Reverse of array without space
#include<iostream>
using namespace std;
  void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={5,9,3,1,2,4};
    int n=sizeof(arr)/sizeof(int);
    int st=0;
    int end=n-1;
    while(st<end)
    {
       int temp =arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    printarr(arr,n);
    return 0;
}