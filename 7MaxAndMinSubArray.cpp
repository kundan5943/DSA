//finding Max And min sum of Sub array using Brute force approach 

//INT_MIN function :  -infinity
//INT_MAX function :  +infinity
#include<iostream>
#include<Climits>
using namespace std;

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n =sizeof(arr)/sizeof(int);
    int maxsum=INT_MIN;//INT_MIN is use for give -INFINITY value.
    int minsum=INT_MAX;
    int currsum;  //current sum
    for(int st=0;st<n;st++)//outer loop 
    {
        for(int end =st;end<n;end++)
        {    currsum=0;
            for(int i=st;i<=end;i++)
            {
               currsum+=arr[i];
               
              maxsum=max(maxsum,currsum);//this 'max()' function is use to give you a max value,it is inbuilt function by c++.
             /* if(maxsum<sum)
              {
                maxsum=sum;
              }*///you can also use this if condition for maxsum of subarray 

              minsum=min(minsum,currsum);
            }
            cout<<currsum<<",";
          
        }
        cout<<endl;
        
    }
    cout<<"Maximum sum of subarray is :"<<maxsum<<endl;
    cout<<"Minsum sum of subarray is :"<<minsum<<endl;

    return 0;
}


