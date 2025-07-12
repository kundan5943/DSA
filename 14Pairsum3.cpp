#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector <int> vec,int target)//a function that return vector thats why i use "vector<int> returntype"
{
    int st=0;
    int end=(vec.size() -1);
    int currpairsum=0; 
    vector <int> ans;
    while(st<end)
    {
        currpairsum=vec[st]+vec[end];
        if(currpairsum==target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currpairsum<target)
        {
            st++;
        }
        else
        { 
            end--;

        }
    }
    return ans;
}
int main(){
    vector <int> vec={1,4,5,7,10};
    int target=6;
    
    vector <int> ans=pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}