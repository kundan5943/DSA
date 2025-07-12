#include<iostream>
#include<vector>
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
        void dfshelper(int u,vector<bool>&vis)
        {
            
            vis[u]=true;
            cout<<u<<" ";
            list<int>neighbour=l[u];
            for(int el:neighbour)
            {
                if(!vis[el])
                {
                    dfshelper(el,vis);
                }

            }


        }
        void dfs ()
        {
            vector<bool>vis(V,false);
            for (int i=0;i<V;i++)
            {
                if(!vis[i])
                {
                   dfshelper(i,vis);
                
                }
            }
        }
    



};

int main(){
    Graph graph(9);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(2,3);
     graph.add(4,2);
     graph.add(5,8);
     graph.add(7,6);
  
   // graph.print();
   graph.dfs();

    return 0;
}