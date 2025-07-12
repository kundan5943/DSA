#include<iostream>
#include<vector>
#include<climits>
#include<queue>

using namespace std;
class Edge
{  
    public:
    int v;
    int wt;
    
    Edge(int v,int wt)
    {
        this->wt=wt;
        this->v=v;
    }
};
void bellmanfortalgorithm(int src,vector<vector<Edge>>graph,int V)
{

    
    vector<int>dist(V,INT_MAX);
    dist[src]=0;

    for(int i=0;i<V-1;i++)
    {

        for(int j=0;j<V;j++)
        {

            vector<Edge>neighbour=graph[j];
            for(Edge e:neighbour)
            {
               
                if(dist[j]!=INT_MAX && dist[e.v]>dist[j]+e.wt)
                {
                    dist[e.v]=dist[j]+e.wt;
                    
                }


            }
        }
    }
    for(int i=0;i<dist.size();i++)
   {
    cout<<"shortest distance for vertex "<<i<<" is:-  "<<dist[i]<<" "<<endl;
   }

}

int main(){
    // int V=4;
    //   vector<vector<Edge>>graph(V);
    // graph[0].push_back(Edge(1,1));
    // graph[0].push_back(Edge(-3,2));

    
    // graph[1].push_back(Edge(-2,3));

    // graph[2].push_back(Edge(3,1));
    // graph[2].push_back(Edge(4,3));
   
    // bellmanfortalgorithm(0,graph,V);
    
    
       int V1=5;
      vector<vector<Edge>>graph1(V1);

      graph1[0].push_back(Edge(1,2));
      graph1[0].push_back(Edge(2,4));

      graph1[1].push_back(Edge(2,-4));

      graph1[2].push_back(Edge(3,2));

      graph1[3].push_back(Edge(4,4));

      graph1[4].push_back(Edge(1,-1));

      bellmanfortalgorithm(4,graph1,V1);
    
    return 0;
}