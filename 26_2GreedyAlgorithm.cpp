//PAIR 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp1(pair<int,int> pair1,pair<int,int> pair2)
{
    //first Decending
    return pair1.first>pair2.first;
}
bool cmp2(pair<int,int> pair1,pair<int,int> pair2)
{
    //first acending 
    return pair1.first<pair2.first;
}
bool cmp3(pair<int,int> pair1,pair<int,int>pair2)
{
    // second Acending
    return pair1.second<pair2.second;
}
bool cmp4(pair<int,int> pair1,pair<int,int>pair2)
{
    // second Acending
    return pair1.second>pair2.second;
}
int main(){
    //We can make pair like following example and also we can initailize as data type as pair in vector. means vector can able touse pair as data type.
    pair<int,int>p;
    p=make_pair(1,2);
   cout<<"("<<p.first<<","<<p.second<<")"<<endl;


    int start[3]={0,1,3};
    int end[3]={9,2,4};
    vector<pair<int,int>> activity(3,make_pair(0,0));
     
    activity[0]=make_pair(0,9);
    activity[1]=make_pair(1,2);
    activity[2]=make_pair(3,4);
    for(int i=0;i<activity.size();i++)
    {
        cout<<"A"<<i<<": ("<<activity[i].first<<","<<activity[i].second<<")"<<endl;
    }
    
    cout<<endl;
    sort(activity.begin(),activity.end(),cmp3);
    for(int i=0;i<activity.size();i++)
    {
        cout<<"A"<<i<<": ("<<activity[i].first<<","<<activity[i].second<<")"<<endl;
    }
    return 0;
}