#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void FindElement(vector<int>arr)//find element which is greater than n/3
{
    unordered_map<int ,int> m;

    for(int i=0;i<arr.size();i++)
    {
       
        if(m.count(arr[i]))
        {
            m[arr[i]]++;
        }
        else
        {
            m[arr[i]]=1;

        }
    }

    for(pair<int,int>p:m)
    {

        if(p.second>(arr.size()/3))
        {
            cout<<p.first<<endl;
            break;
        }

    }

}
int main(){
    vector<int>arr={2,2,9,1,2,1,2,4,6,1,2,2};
    FindElement(arr);
    return 0;
}