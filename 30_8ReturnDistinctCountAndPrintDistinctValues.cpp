#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void PrintDistinctCount(vector<int> vec)
{
    unordered_set<int>s;
    for(int i=0; i<vec.size();i++)
    {
          s.insert(vec[i]);
    } 

    cout<<"Distinct Values are:- ";
    for(auto el:s)
    {
        cout<<el<<" ";
    }
}
int distinctCount(vector<int> vec)
{
    unordered_set<int>s;
    for(int i=0;i<vec.size();i++)
    {
        s.insert(vec[i]);
    
    }
    return s.size();

}
int main(){
    vector<int>vec={1,2,6,3,1,2,4,3,5,8,9,2,1,1,3};
    cout<<"distinct count of vector is:- "<<distinctCount(vec)<<endl;
   
   PrintDistinctCount(vec);
    return 0;
}