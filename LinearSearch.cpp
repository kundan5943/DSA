//linear search 
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
 for(int i=0;i<n;i++)
 {
    if(arr[i]==key)
    {
        return i;
    }
    
 }
   return -1;
}
int main(){
    int arr[5]={7,8,9,2,3};
    int key =2;
    int n=sizeof(arr)/sizeof(int);
    int index =0;
    cout<<"the key on index is : "<<linearsearch(arr,n,key)<<endl;

    return 0;
}