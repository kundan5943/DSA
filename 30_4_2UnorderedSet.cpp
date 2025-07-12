#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
   unordered_set<int>s;
    s.insert(5);
    s.insert(9);
    s.insert(8);
    s.insert(19);
    s.insert(10);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(5);//Here i try add same key again and again but one is added only once
  

    cout<<s.size()<<endl;
    if(s.find(5)!=s.end())
    {
        cout<<"5 exist"<<endl;
    }
    else
    {
        cout<<"5 not exist"<<endl;
    }
    s.erase(9);

    for(auto el:s)
    {
        cout<<el<<endl;
    }


    
    return 0;
}