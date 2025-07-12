#include<iostream>
#include<vector>
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
     bool helperBipartile(int src,queue<int>q,vector<int>color)
     {   
        //0-blue
        //1-white
          
          color[src]=0;
          q.push(src);
         

          while(!q.empty())
          {
            int u=q.front();
            q.pop();

            list<int>neighbour=l[u];
            for(int v:neighbour)
            {
                if(color[v]==-1)//NOt visited
                {
                   color[v]=!color[u];
                   q.push(v);
                }
                else//Visited
                {
                    if(color[u]==color[v])
                    {
                        return false;
                    }
                }
            }
        
          }
              return true;

     }

    bool bipartileGraph()
    {
         vector<int>color(V,-1);
         queue<int>q;

         return helperBipartile(0,q,color);
    }


};


int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(0,2);
    graph.add(1,4);
    graph.add(2,3);
     graph.add(3,4);

     if(graph.bipartileGraph())
     {
        cout<<"It is a Bipartile Graph"<<endl;
     }
     else
    {
      cout<<"It is not a Bipartile Graph"<<endl;
    }

    return 0;
}