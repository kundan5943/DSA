#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec1;//first type to declare a vector

    vector<int> vec2={4,5,8,5,8,5};//second type

    vector <int> vec3(5,1);//third type
    for(int i=0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<" ";
    }
   cout<<endl;
    for(int i=0;i<vec3.size();i++)
    {
        cout<<vec3[i]<<" ";
    }
    return 0;
}