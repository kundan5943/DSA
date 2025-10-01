#include<iostream>
#include<vector>
using namespace std;
class DisjointSet
{
       int n;
       vector<int>prnt;//Parent
       vector<int>rank;
    public:
   
      DisjointSet(int n)
      {
        this->n=n;
        
      for(int i=0;i<n;i++)
       {
         prnt.push_back(i);
         rank.push_back(0);
       }

      }

      

       int find(int x)
       {

        if(prnt[x]==x)
        {
            return x;
        }
        return prnt[x]=find(prnt[x]);
       }
        void add(int a,int b)
        {

            int parenta=find(a);
            int parentb=find(b);
            if(rank[parenta]==rank[parentb])
            {
                rank[parenta]++;
                prnt[parentb]=parenta;
            }
            else if(rank[parenta]<rank[parentb])
            {
                   
                prnt[parenta]=parentb;
            }
            else
            {
                prnt[parentb]=parenta;
            }

        }

        void getinfo()
        {
            for(int i=0;i<n;i++)
            {
                cout<<i<<":"<<rank[i]<<":"<<prnt[i]<<endl;
            }
        }
    

};
int main(){
    DisjointSet dj(6);
    dj.add(0,2);
    cout<<dj.find(2)<<endl;
    dj.add(1,3);
    dj.add(2,5);
    dj.add(0,3);
    cout<<dj.find(3)<<endl;
        dj.add(0,4);

        dj.getinfo();

    return 0;
}