#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//Near car
class Car
{
    public:
    int indx;
    int distsq;
    Car(int indx,int distsq)
    {
        this->indx=indx;
        this->distsq=distsq;

    }
   bool operator <(const Car &obj)
    const
    {
        return this->distsq>obj.distsq;

    }

};

void Nearcar(vector<pair<int,int>>pos,int k)
{
     vector<Car>cars;
    
     for(int i=0;i<pos.size();i++)
     {
       int distsq=(pos[i].first*pos[i].first)+(pos[i].second*pos[i].second);
       distsq*=distsq;
        cars.push_back(Car(i,distsq));
     }

    priority_queue<Car>pq(cars.begin(),cars.end());
    
    for(int i=0;i<k;i++)
    {
        cout<<"Car:- "<<pq.top().indx<<endl;
        pq.pop();
    }

}
int main(){
    vector<pair<int,int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(1,3));
    pos.push_back(make_pair(4,-5));
        pos.push_back(make_pair(5,3));
    pos.push_back(make_pair(7,-5));
    int k=3;
    Nearcar(pos,k);
    return 0;
}