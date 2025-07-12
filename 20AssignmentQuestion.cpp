//Foragiven integer array of sizeN.You have to find all the occurrences(indices) of a given element(Key) and print them.
#include<iostream>
using namespace std;
void Occurance(int arr[],int st,int ed,int key)
{   

    if(st > ed)
    {
        return;
    }

      if(arr[st]==key)
        {
            cout<<st<<endl;
        }
        Occurance(arr,st+1,ed,key);
  
}
int main(){
    int arr[]={7,5,9,5,9,2,3,1,7,7};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    Occurance(arr,0,n-1,key);
    //st-starting index
    //ed-ending index index
    return 0;
}