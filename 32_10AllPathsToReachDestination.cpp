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


   

    void allpathshelper(int src,int dest,vector<bool>vis,string path )
    {
        if(src==dest)
        {   
            cout<<path<<dest<<endl;
            return;
        }
        vis[src]=true;
        path+=to_string(src);

        list<int>neighbour=l[src];

        for(int v:neighbour)
        {
            
            if(!vis[v])
            {
                allpathshelper(v,dest,vis,path);
            }
            
        }
        path=path.substr(0,path.size()-1);
        vis[src]=false;


    } 
    void allpaths(int dest)
    {
        vector<bool>vis(V,false);
        string path="";
        allpathshelper(0,dest,vis,path);

    }

};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(2,3);
    graph.add(3,2);
    graph.add(2,4);
    graph.allpaths(4);
   
    return 0;
}