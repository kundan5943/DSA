#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void PairSumTarget(vector<int>arr,int targ)
{   
    unordered_map<int,int>m;
     for(int i=0;i<arr.size();i++)
     {  
        int x=targ-arr[i];
       if(m.count(x))
       {
           cout<<"Indexes are- ("<<m[x]<<","<<i<<")"<<endl;
           break;
       }
       else
       {
        m[arr[i]]=i;

       }
     } 

}
int main(){
    vector<int>arr={8,6,8,1,2,3,7};
    int targ=9;
    PairSumTarget(arr,11);
    PairSumTarget(arr,10);
    PairSumTarget(arr,16);



    return 0;
}