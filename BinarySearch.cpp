#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int st=0;
    int end=n-1;
    int mid; 


    while(st<=end)
    {
        mid=(st+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            st = mid +1;
        }
        else 
        {
            end = mid-1;
        }
       

    }
     
            return-1;

}
int main(){
    int arr[]={1,2,4,6,7,9};//In binary search array should be in a sorted form 
    int n=sizeof(arr)/sizeof(int);
    int key =4;

cout<<"the index where key is present in array is : "<<binarysearch(arr,n,key);
    return 0;
}