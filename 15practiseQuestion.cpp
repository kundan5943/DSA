//Find a subarray that have maximum product
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//Rotated array is like this- 456123
//first aaray is 1234567 in  rotated simply divide array into two part and second half is moved to first then rotated array is 4567123


bool maxproduct(vector<int> nums)
{
     int Mintillnow=nums[0];
     int Maxtillnow=nums[0];
     int ans=INT_MIN;
     for(int i=1;i<nums.size();i++)
     {  int curr=nums[i];
        int temp=max(curr,max(Mintillnow*curr,Maxtillnow*curr));

         Mintillnow=min(curr,min(Mintillnow*curr,Maxtillnow*curr));
         Maxtillnow=temp;
         ans=max(Maxtillnow,ans);

     }
     cout<<ans<<endl;
     return ans;

}
int main(){
        vector <int> vec={2,3,-2,4,5};
        maxproduct(vec);
      
    return 0;
}