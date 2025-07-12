#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec={4,7,5,8};
    cout<<"size of vector is "<<vec.size()<<endl;//size =4
    cout<<"capacity of vector is "<<vec.capacity()<<endl;//capacity=4
    
    vec.push_back(5);//it is use add element in a vactor
    cout<<"size of vector is "<<vec.size()<<endl;//size =5
    cout<<"capacity of vector is "<<vec.capacity()<<endl;//capacity=8

    vec.push_back(5);
    vec.push_back(9);
    vec.push_back(3);//here the capacity is 8 but when you add element again then capacity willincrease by double
    vec.push_back(2);
    cout<<"size of vector is "<<vec.size()<<endl;//size =9
    cout<<"capacity of vector is "<<vec.capacity()<<endl;//capacity=16

    vec.pop_back();/*here after poping one element from vector size will become 8 
    and it not affect the capacity becuase one's capacity is increase they not decrease only can able increase it*/

    cout<<"size of vector is "<<vec.size()<<endl;//size =8
    cout<<"capacity of vector is "<<vec.capacity()<<endl;//capacity=16 it remain same
    return 0;
}