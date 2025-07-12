#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int LargestSubarrayWithSumZero(vector<int>vec)
{    
    int ans=0;
    int sum=0;
     unordered_map<int,int>m;
     for(int j=0;j<vec.size();j++)
     {
        sum+=vec[j];
        int currlength=0;
        if(m.count(sum))
        {  
           currlength=j-m[sum];
           ans=max(ans,currlength);
        }
        else
        {
            m[vec[j]]=j;
        }
     }
     return ans;
}
int main(){
    vector<int>vec={15,-2,2,-8,1,7,10};
    cout<<"Largest Subarray with sum zero have size="<<LargestSubarrayWithSumZero(vec);
    return 0;
}