#include<iostream>
#include<algorithm>//this is inclueded for sort() function
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
   
    sort(arr+1,arr+4);//for ascending order start from index '1' to index '3'
    printarr(arr,n);

    sort(arr+2,arr+5);//for ascending order start from index '2' to index '4'
    printarr(arr,n);    

    sort(arr,arr+6);//its start ascending sorting from index '0' to index '5'
    printarr(arr,n);

    
     int arr1[]={1,6,2,1,4,3,2,8};
     int n1=sizeof(arr1)/sizeof(int);
     sort(arr1,arr1+8,greater<int>());//its for decending sort ,it star from index 0 to index 6
     printarr(arr1,n1);
    
    sort(arr1,arr1+5,greater<int>());//for decending order sort start from index '2' to index '4'
    printarr(arr1,n); 
    return 0;
}