//Find the largest element of an array and smallest element of array
#include<iostream>
using namespace std;

int main(){
    int arr[6]={5,7,4,10,2,15};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0]; 
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max =arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }


    }
    cout<<"largest element is :  "<<max<<endl;
    cout<<"Smallest element is :  "<<min<<endl;
    return 0;
}