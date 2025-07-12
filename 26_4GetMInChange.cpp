#include<iostream>
#include<vector>
using namespace std;
void getminchange(vector<int>coins,int V)
{     
    int ans=0;
     int n=coins.size();
    
     for(int i=n-1;i>=0&&V>0;i++)
     {
        if(V>=coins[i])
        {   
            int count=V/coins[i];
            ans+=count;
            V=V % coins[i]; 
        }
       
     }
     cout<<ans<<endl;

}
int main(){
vector<int>coins={1,2,5,10,20,50,100,500,1000,2000};
    int V=1000;
    cout<<"start"<<endl;
  getminchange(coins,V); 
    cout<<"end"<<endl;
    return 0;
}