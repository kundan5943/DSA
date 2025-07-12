#include<iostream>
#include<queue>
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
    
    void DFSHelper(int u,vector<bool>&vis)
    {
         
        cout<<u<<" ";
        vis[u]=true;
    list<int> neighbour=l[u];

        for(int v:neighbour)
        {
             if(vis[v]!=true)
             {
               DFSHelper(v,vis);
             }
        }
    }
    void dfs()
    {
        vector<bool>vis(V,false);
       cout<<"Dfs Traversal is:- ";
        DFSHelper(0,vis);

    }

};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(2,3);
   
    graph.add(3,4);
    
    graph.dfs();
    return 0;
}