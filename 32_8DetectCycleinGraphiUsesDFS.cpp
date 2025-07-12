#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Graph
{
    int V;
    list<int>*l;
    public:

    Graph(int V)
    {
        this->V=V;
        l=new list<int> [V];
    }

    void add(int u,int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print()
    {
        for(int u=0;u<V;u++)
        {
            list<int>neighbour=l[u];
            cout<<u<<":";
            for(int el:neighbour)
            {
                cout<<el<<" ";
            }
            cout<<endl;
        }
    }
    bool helperdetectCycle(int src,vector<bool>&vis,int parent)
    {
        vis[src]=true;
        list<int>neighbosrcr=l[src];

        for(int v:neighbosrcr)
        {
            if(!vis[v])
            {
                return helperdetectCycle(v,vis,src);
            }
            else
            {
                if(v!=parent)
                {
                    return true;
                }

            }

        }
        return false;

    }
    bool DetectCycle()
    {
        vector<bool>vis(V,false);
        return helperdetectCycle(0,vis,-1);

    }


};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
  
    graph.add(2,3);
     graph.add(4,2);
     cout<<graph.DetectCycle();
    
    return 0;
}