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
   int  helperBipartile(int src,vector<bool>&vis,int parent,string length)
    {
        vis[src]=true;
        list<int>neighbosrcr=l[src];
        length+=src;

        for(int v:neighbosrcr)
        {
            if(!vis[v])
            {
                return helperdetectCycle(v,vis,src,length);
            }
            else
            {
                if(v!=parent)
                {  
                 
                    return length.size();
                }

            }

        }
        return 0;


    }
    bool BipartileGraph()
    {
        vector<bool>vis(V,false);
        string length="";
        int val= helperdetectCycle(0,vis,-1,length);

        if(val%2==0)
        {
            return true;
        }

        else{
            return false;
        }
    }


};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(0,2);
    graph.add(1,4);
    graph.add(2,3);
     graph.add(3,4);
     cout<<graph.DetectCycle();
    
    return 0;
}