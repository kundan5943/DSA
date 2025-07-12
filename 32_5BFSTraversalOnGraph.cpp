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


    void BFS()
    {
        queue<int>q;
        vector<bool>vis(V,false);

        q.push(0);
        vis.push_back(0);

        while(!q.empty())
        {
            int u=q.front();
            q.pop();
              
             cout<<u<<" ";
             list<int>neighbour=l[u];
              for(int v:neighbour)
              {
                if(!vis[v])
                {
                    vis[v]=true;
                    q.push(v);
                     
                }
                
              }
           
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
    graph.add(2,4);
    
    cout<<"BFS traversal : ";
    graph.BFS();
    return 0;
}