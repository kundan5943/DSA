#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//Subarrays equals to k find count
int FindCount(vector<int>arr,int k)//Find count of subarray that are equal to K
{
    unordered_map<int,int>m;
    m[0]=1;//(key)sum=1(value)
    int sum=0;
    int ans=0;
    for(int j=0;j<arr.size();j++)
    {
        sum+=arr[j];
        if(m.count(sum-k))//step1
        {
            ans+=m[sum-k];

        }
        //step2
        if(m.count(sum))
        {
           m[sum]++;
        }
        else{
            m[sum]=1;
        }
    }
   return ans;
}
int main(){
    vector<int>arr={10,2,-2,-20,10};
    int k=-10;
    cout<<"Total Subarray count that is equalto K is:- "<<FindCount(arr,k);

    return 0;
}