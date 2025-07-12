#include<iostream>
#include<queue>
#include<list>
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


   bool detectCyclehelper(int src,vector<bool>&vis,vector<bool>&recpath)
   {
        vis[src]=true;
        recpath[src]=true;

        list<int> neighbour=l[src];

        for(int v:neighbour)
        {

            if(!vis[v])
            {
                if(detectCyclehelper(v,vis,recpath))
                {
                    return true;
                }
            }
            else
            {
                if(recpath[v])
                {
                    return true;
                }
            }

        }
        recpath[src]=false;
        return false;

   }
    bool detectCycleInDirectedGraph()
    {
        vector<bool>vis(V,false);
        vector<bool>recpath(V,false);
        for(int i=0;i<V;i++)
        {

            if(detectCyclehelper(i,vis,recpath))
            {
                return true;
            }
        }
        return false;
    }


};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(3,2);
    graph.add(4,2);
    cout<<graph.detectCycleInDirectedGraph();
   
    return 0;
}