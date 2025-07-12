#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using namespace std;
class Edge
{
    public:
    int v;
    int wt;
    Edge(int wt,int v)
    {
        this->v=v;
        this->wt=wt;

    }

};
void dijkstraAlgorithm(int src,vector<vector<Edge>>graph,int V)
{
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

pq.push(make_pair(0,src));
vector<int>dist(V,INT_MAX);
dist[src]=0;

while(!pq.empty())
{
     

    int u=pq.top().second;
    pq.pop();
    

    vector<Edge>neighbour=graph[u];
    for(Edge e:neighbour)
    {

        if(dist[e.v]>dist[u]+e.wt)
        {
            dist[e.v]=dist[u]+e.wt;
            pq.push(make_pair(dist[e.v],e.v));
        }
    }

}
for(int i=0;i<dist.size();i++)
{
    cout<<"shortest distance for vertex "<<i<<" is- "<<dist[i]<<" "<<endl;
}

}
int main(){
   int V=6;
      vector<vector<Edge>>graph(V);
    graph[0].push_back(Edge(2,1));
    graph[0].push_back(Edge(4,2));

    graph[1].push_back(Edge(1,2));
    graph[1].push_back(Edge(7,3));

    graph[2].push_back(Edge(3,4));

    graph[3].push_back(Edge(1,5));

    graph[4].push_back(Edge(1,3));
    graph[4].push_back(Edge(6,5));
    dijkstraAlgorithm(0,graph,V);

    return 0;
}