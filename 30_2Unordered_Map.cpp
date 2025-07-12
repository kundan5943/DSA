#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["India"]=1;
    m["UK"]=25;
    m["Australia"]=13;
    m["England"]=40;

    cout<<m["Australia"]<<endl;

    if(m.count("India"))//Count Function
    {
        cout<<"India exist"<<endl;
    }
    else
    {
        cout<<"India is not exist"<<endl;

    }
    
    //Erase Function
    m.erase("England");

    for(pair<string,int>p:m)
    {
        cout<<p.first<<","<<p.second<<endl;
    }
    return 0;
}