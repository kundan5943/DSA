#include<iostream>
using namespace std;
 int Maxsubsequencelength(int arr[],int n)
 {
    int len=2;
    int prev=(arr[0]+arr[1])%2;
    
    for(int i=1;i<n-1;i++)
    {   
        if(i+1<n)
        {

        if((arr[i]+arr[i+1])%2==prev)
        {
             len++;
        }
       
       
    }
     prev=(arr[i]+arr[i+1])%2;
    }

    if(n!=2)
    {
        return len+1;
    }

    return len;
    

 }
int main(){
    int arr[]={1,2,3,4};

    cout<<Maxsubsequencelength(arr,4);
    return 0;
}