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
    bool helperhasApath(int src,int dest,vector<bool>&vis)
{    if(src==dest)
    {
        return true;
    }
    vis[src]=true;
    list<int>neighbour=l[src];
    
    for(int v:neighbour)
    {
        if(!vis[v])
        {
       
          if( helperhasApath(v,dest,vis))
          {
               return true;
          }
        }
    }

    return false;
      
}
    bool HasPath(int src,int dest)
    {
        vector<bool>vis(V,false);
        return helperhasApath(src,dest,vis);
    }



};

int main(){
    Graph graph(5);
    graph.add(0,1);
    graph.add(1,2);
    graph.add(1,3);
    graph.add(2,3);
     graph.add(0,2);
   // graph.print();

   
   //HasApath
   if(graph.HasPath(3,2))
   {
    cout<<"yes there is a path to reach destination"<<endl;
   }
   else{
    cout<<"There is no path to reach destination"<<endl;
   }
   //------------------
   if(graph.HasPath(1,4))
   {
    cout<<"yes there is a path to reach destination"<<endl;
   }
   else{
    cout<<"There is no path to reach destination"<<endl;
   }
    return 0;
}