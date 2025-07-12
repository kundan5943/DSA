//there is an array which have almost twice value only are there in array that is single find that value
#include<iostream>
#include<vector>
using namespace std;
int Singlenumber1(int num[],int n)
{//This function for array 

    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^num[i];
    }
    return ans;
}
int Singlenumber2(vector <int> vec)
{
//This function for vector
    int ans=0;
    for(int i=0;i<vec.size();i++)
    {
        ans=ans^vec[i];

    }
    return ans;
}
int main(){
    int arr1[]={4,1,5,2,2,1,4};
    int n=sizeof(arr1)/sizeof(int);
    cout<<Singlenumber1(arr1,n)<<endl;

    int arr2[]={3,4,4,2,1,3,2};
    int n2=sizeof(arr2)/sizeof(int);
    cout<<Singlenumber1(arr2,n2)<<endl;

      vector <int> vec1={4,1,5,2,2,1,4};
      vector<int> vec2={3,4,4,2,1,3,2};
    cout<<Singlenumber2(vec1)<<endl;
     cout<<Singlenumber2(vec2)<<endl;
    return 0;
}