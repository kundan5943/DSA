//reverseArray with extra spaces
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
    int arr1[]={8,7,9,7,4,5};
    int n=sizeof(arr1)/sizeof(int);
    int arr2[n];
    for(int i=0;i<n;i++)
    {   int j=n-i-1;

        arr2[j]=arr1[i];
    }
   
   for(int i=0;i<n;i++)
   {
       arr1[i]=arr2[i];
   }
   cout<<"Reverse of an array is :";
 printarr(arr1,n);
    return 0;
}