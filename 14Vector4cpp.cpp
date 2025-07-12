#include<iostream>
#include<vector>
using namespace std;
int changevec1(vector <int> nums)
{
    nums[0]=45;
    cout<<nums[0]<<endl;
}
int changevec2(vector <int> &nums)
{
    nums[0]=45;
    cout<<nums[0]<<endl;
}
int main(){
   
        vector <int> vec={2,3,-2,4,5};
      
        changevec1(vec);
        cout<<vec[0]<<endl;
        changevec2(vec);
        cout<<vec[0];
    return 0;
}