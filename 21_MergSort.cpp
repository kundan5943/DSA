//MergSort
#include<iostream>
#include<vector>
using namespace std;
void Merg(int arr[],int si ,int mid,int ei)
{  vector <int> temp;
    int i=si;
    int j=mid+1;
    while (i<=mid && j<=ei)
    {
         if(arr[i]<arr[j])
         {
            temp.push_back(arr[i++]);
         }
         else{
            temp.push_back(arr[j++]);
         }

    }
    while(i<=mid)
    {
       temp.push_back(arr[i++]);
    }
    while(j<=ei)
    {
       temp.push_back(arr[j++]);
    }
    for(int i=si,x=0;i<=ei;i++)
         {
             arr[i]=temp[x++];
         }


}
void Mergsort(int arr[],int si,int ei)
{
    int mid =(si+ei)/2;
    if(si>=ei)
    {
      return;
    }
    Mergsort(arr,si,mid);//Left half
    Mergsort(arr,mid+1,ei);//Right half

    Merg(arr,si,mid,ei);
    
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={6,5,7,2,3,4};
    int n=6;
    Mergsort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}