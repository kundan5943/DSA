#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>m;
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i])==0)
            {
                m[nums[i]]=1;
            }
            else
            {
                  
                  m[nums[i]]++;
            }
            s.insert(nums[i]);
        }
        int ans =0;
        for(int el:s)
        {
            int tempans;
            if(m.count(el+1))
            {
               tempans=m[el]+m[el+1];
               ans=max(ans,tempans);
            }
          
        }

        return ans;
        
    }

};
int main(){
    Solution s;
    vector<int>vec={1,3,2,2,2,5,3,7};
    cout<<s.findLHS(vec);
    
    return 0;
}