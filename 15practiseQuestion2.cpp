#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool Containsduplicate(vector <int>  &vec)//here pass reference is use.
 {
   
    sort(vec.begin(),vec.end());

    cout<<"sorted array is :  ";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<vec.size();i++)
    {
       if(vec[i]==vec[i-1])
       { 
        cout<<"There are repeated elements at index :-  "<<(i-1)<<" and "<<i<<endl;
        return true;
       }
    }
      
       cout<<"no repeated elements are there"<<endl;
        return false;

 }
int main(){
   vector<int> vec={4,2,3,4,5,2,1};

   Containsduplicate(vec);

    return 0;
}