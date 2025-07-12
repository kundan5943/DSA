#include<iostream>
#include<algorithm>
#include<vector>
//find maximum profit of jobs and also display the sequence that the job you choose.
using namespace std;
class Job
{
    public:
    int idx;
    int deadline;
    int profit;
    Job(int idx,int deadline,int profit)
    {
        this->idx=idx;
        this->deadline=deadline;
        this->profit=profit;
    }

};
void Maxprofit(vector<pair<int,int>>pair)
{    
    int n=pair.size();
    vector<Job>jobs;
    for(int i=0;i<n;i++)
    {   
        jobs.emplace_back(i,pair[i].first,pair[i].second);
    }
    sort(jobs.begin(),jobs.end(),[](Job&a,Job&b)
   {
        return a.profit>b.profit;
   });
   cout<<"selected job "<<jobs[0].idx<<endl;
   int ans=jobs[0].profit;
   int safedeadline=2;

   for(int i=0;i<n;i++)
   {
      if(jobs[i].deadline>=safedeadline)
      {
        cout<<"selected job "<<jobs[i].idx<<endl;

        ans+=jobs[i].profit;
        safedeadline++;
      }
   }
   cout<<ans;
}
int main(){
    int n=4;
    vector<pair<int,int>>pair(4,make_pair(0,0));//it is a pair of deadline and profit value
    pair[0]=make_pair(4,20);
    pair[1]=make_pair(1,10);
    pair[2]=make_pair(1,40);
    pair[3]=make_pair(1,30);
    Maxprofit(pair);
    return 0;
}