#include<iostream>
#include<queue>
#include<stack>
#include<list>
//APPROACH 2 kAHN'S ALGORITHM (BFS)
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
    void helper(int src,vector<bool>&vis,stack<int>&s)
    {

        vis[src]=true;
        list<int>neighbour=l[src];

        for(int v:neighbour)
        {
            if(!vis[v])
            {
                helper(v,vis,s);

            }


        }
        s.push(src);
    }
    void topologicalsorting()
    {
        vector<bool>vis(V,false);

        stack<int>s;
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                helper(i,vis,s);

            }
            
        }
        while(!s.empty())
        {
            cout<<s.top()<<" ";

            s.pop();
        }
    }


   



};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(2,3);
    graph.add(3,2);
    graph.add(4,2);
    graph.topologicalsorting();
    return 0;
}