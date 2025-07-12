#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m;
    m["India"]=1;
    m["UK"]=25;
    m["Australia"]=13;
    m["England"]=40;

    cout<<m["UK"]<<endl;
    
    cout<<m.count("UK")<<endl;

    m.erase("Australia");

    for(pair<string,int>p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}