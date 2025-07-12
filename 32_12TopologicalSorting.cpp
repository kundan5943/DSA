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
    
    void Indegree(vector<int>&indegree)
    {
         for(int i=0;i<V;i++)
         {
            
            list<int>neighbour=l[i];
            for(int v:neighbour)
            {
                indegree[v]++;
            }
         }

    }
    void topologicalSorting()//Approach 2
    {    
        queue<int>q;
         vector<int>indegree(V,0);
         Indegree(indegree);

         for(int u=0;u<V;u++)
         {
              if(indegree[u]==0)
              {
                q.push(u);
              }
         }


         while(q.size()>0)
         {
              
            int curr =q.front();
            cout<<curr<<" ";
            q.pop();
            list<int>neighbour=l[curr];
            for(int v:neighbour)
            {
                indegree[v]--;
                if(indegree[v]==0)
                {
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
    graph.add(3,2);
    graph.add(4,2);
graph.topologicalSorting();
    return 0;
}