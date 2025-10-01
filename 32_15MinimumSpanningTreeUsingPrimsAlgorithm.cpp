#include<iostream>
#include<list>
#include<queue>
using namespace std;
class Edges
{
       public:
       int u,wt;
       Edges(int u,int wt)
       {
        this->u=u;
     
        this->wt=wt;
       }

};
class Graph
{


    int V;
    bool undir;
    list<pair<int,int>>*l;
    public:

    Graph(int V,bool undir=false)
    {
        this->V=V;
        l=new list<pair<int,int>> [V];
        this->undir=undir;
    }


    void add(int u,int v,int wt)
    {

        l[u].push_back(make_pair(v,wt));

        if(undir)
        {
           
            l[v].push_back(make_pair(u,wt));

        }

    }

    int primsalgo(int src)
    {
         vector<bool>mstset(V,false);
         vector<Edges>edge;

         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
         pq.push(make_pair(0,src));
         int ans=0;
         while(!pq.empty())
         {
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            if(!mstset[u])
            {
               
                mstset[u]=true;
                ans+=wt;
                edge.push_back(Edges(u,wt));
                list<pair<int,int>>neighbour=l[u];
                for(pair<int,int> n:neighbour)
                {

                    if(!mstset[n.first])
                    {
                          pq.push(make_pair(n.second,n.first));
                        
                         

                    }
                  
                  
                
                   
                       
                 

                }
            }

         }

         for(Edges e:edge)
         {

            cout<<"("<<e.u<<","<<e.wt<<")"<<endl;
         }
         return ans;
    }

};

int main(){
    Graph graph(4);
    graph.add(0,1,10);
    graph.add(0,2,15);
    graph.add(0,3,30);

      graph.add(1,3,40);  
      graph.add(3,2,50);
      cout<<graph.primsalgo(0);
    return 0;
}