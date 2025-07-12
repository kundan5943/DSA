//Binary Search using recursion
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int sti,int edi,int key)//startind index=sti,ending index = edi
{   
    
    if(sti>edi)
    {
        return -1;
    }
    int mid =(sti+edi)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
          return BinarySearch(arr,sti,mid-1,key);//Left Half
    }
    else
    {
       return BinarySearch(arr,mid+1,edi,key);//Right half
    }



}
int main(){

    int arr[]={1,2,3,4,7,9,12};
    int target=9;
    int n=sizeof(arr)/sizeof(int);
    cout<<"The target value is on the index - "<<BinarySearch(arr,0,n-1,target);
    return 0;
}