#include<iostream>
using namespace std;


int RotatedarrSearch(int arr[],int si,int ei,int tar)
{
    if(si>ei)
    {
        return -1;
    }
    int mid=si+(ei-si)/2;

    if(arr[mid]==tar)
    {
        return mid;
    }
    if(arr[si]<arr[mid])//case 1-//line 1
    {
        //case 1-a
        if(arr[si]<=tar&&tar<arr[mid])
        {
           RotatedarrSearch(arr,si,mid-1,tar);//Lefthalf
        }
        else
        {   //case1-b
                 RotatedarrSearch(arr,mid+1,ei,tar);//Righthalf
        }
    }
    else{//case 2

        if(arr[mid]<tar&&tar<=arr[ei])//case2-c
        {
            //righthalf
            RotatedarrSearch(arr,mid+1,ei,tar);
        }
        else{
            //lefthalf
            RotatedarrSearch(arr,si,mid-1,tar);
        }
    }
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<RotatedarrSearch(arr,0,n-1,2)<<endl;
    cout<<RotatedarrSearch(arr,0,n-1,5)<<endl;
    cout<<RotatedarrSearch(arr,0,n-1,6)<<endl;
    return 0;
}