#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
/*Intersection Means Same values in two or more set that are stored in new set
ex- if we have two arr1 and arr2 so we just compare two array and whatever the similar elements are there 
that we just store in new set*/

//Union -Union means just combining two or more set and store distinct values in new set
void Intersection(vector<int>arr1,vector<int>arr2)
{
    unordered_set<int>s;

    for(int el:arr1)
    {
        s.insert(el);
    }

    cout<<"Intersection:- ";

    for(int el:arr2)
    {
        if(s.find(el)!=s.end())
        {
            cout<<el<<" ";
            s.erase(el);
        }
    }
}
void Union(vector<int>arr1,vector<int>arr2)
{
      unordered_set<int>s;

      for(int el:arr1)
      {
         s.insert(el);
      }
      for(int el:arr2)
      {
        s.insert(el);
      }

      cout<<"Union:- ";
      for(int el:s)
      {
        cout<<el<<" ";
      }
}
int main(){
    vector<int>arr1={7,12,20,2,5};
    vector<int>arr2={5,2,8,1,4,0,7,10};
    Union(arr1,arr2);
    cout<<endl;
    Intersection(arr1,arr2);
    return 0;
}