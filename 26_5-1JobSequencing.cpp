#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int ,int>p1,pair<int,int>p2)
{
   return p1.second>p2.second;
}
void  maxjobprofit(vector<pair<int,int>>job)
{    
    int n=job.size();
    sort(job.begin(),job.end(),compare);
     int ans=job[0].second;
     int safedeadline=2;
     for(int i=1;i<n;i++)
     {
        if(job[i].first>=safedeadline)
        {
            ans+= job[i].second;
            safedeadline++;
        }
     }
    cout<<"Maximum Profit is- "<<ans<<endl;
}
int main(){
    vector<pair<int,int>>job(4,make_pair(0,0));
    job[0]=make_pair(4,20);
    job[1]=make_pair(1,10);
    job[2]=make_pair(1,40);
    job[3]=make_pair(1,30);
   maxjobprofit(job);
    return 0;
}