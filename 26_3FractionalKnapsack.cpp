#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<float,int>p1,pair<float,int>p2)
{
    return p1.first>p2.first;
}
int fractionaknapsack(vector<int> value,vector<int> weight,int W)
{ 
    int n=value.size();
    vector<pair<float,int>>ratio(n,make_pair(0.0,0));
    int ans=0;
    for(int i=0; i<n;i++)
    {
        float r=value[i]/weight[i];
        ratio[i]=make_pair(r,i);

    }
    sort(ratio.begin(),ratio.end(),compare);

    for(int i=0;i<n;i++)
    {
        int idx=ratio[i].second;
        
        if(weight[idx]<=W)
        {
            ans+=value[i];
            W-=weight[i];
        }
        else
        {
            ans+=ratio[i].first*W;
            W=0;
            break;
        }
    }
    cout<<"The max value is "<<ans;
    return ans;

}
int main(){
    vector<int>value={60,100,120};
    vector<int>weight={10,20,30};
    int W=50;//knapsack size
    fractionaknapsack(value,weight,W);
    return 0;
}