#include<iostream>
#include<map>
using namespace std;

int main(){
    map <int,string> m;
    m[101]="kundan";
    m[102]="krishna";
    m[103]="shiv";
    cout<<m[101]<<endl;
    cout<<m[102]<<endl;
    cout<<m[103]<<endl;

    m[102]="Yogeshwar";
    cout<<m[102]<<endl;
cout<<"---------------------------------"<<endl;
    for(auto it:m)
    {
        cout<<"Key - "<<it.first<<" , "<<"Value - "<<it.second<<endl;
    }
    return 0;
}