#include<iostream>
#include<list>
using namespace std;
class Graph
{
    int V;
    list<pair<int,int>>*l;
    public:
    Graph(int V)
    {
        this->V=V;
        l=new list<pair<int,int>> [V];

    }
    void add(int u,int v,int wt)
    {

        l[u].push_back(make_pair(v,wt));
        l[v].push_back(make_pair(u,wt));

    }
    void print()
    {
        for(int u =0;u<V;u++)
        {
            list<pair<int,int>>neighbour=l[u];
            cout<<u<<":";
            for(pair<int,int> el:neighbour)
            {
                cout<<" ("<<el.first<<","<<el.second<<"), ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Graph graph(5);
    graph.add(0,1,5);
    graph.add(1,2,3);
    graph.add(1,3,-1);
    graph.add(2,3,9);
    graph.add(3,2,10);
    graph.add(4,2,-2);
    graph.print();
    return 0;
}