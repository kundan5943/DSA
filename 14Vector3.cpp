#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    vector <int> vec2={1,5,2,5,8};
    vec1=vec2;//In vector it is possible to copy values of vector 2 to vector 1 
    cout<<vec1[0]<<" ";
    cout<<vec1[1]<<" ";
    cout<<vec1[2]<<" ";
   
    return 0;
}