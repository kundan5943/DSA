#include<iostream>
#include<vector>
using namespace std;
// Rodcutting
  int maxprofit(vector<int> price,vector<int> length)
  {
    int n =price.size();
       vector<vector<int>>ds(n+1,vector<int>(length.size()+1,0));
       for(int i=1;i<n+1;i++)
       {
        for(int j=1;j<length.size()+1;j++)
        {

            if(length[i-1]<=j)
            {

                ds[i][j]=max(price[i-1]+ds[i][j-length[i-1]],ds[i-1][j]);

            }
            else{
                ds[i][j]=ds[i-1][j];
            }
        }

       }
       for(vector<int>vec:ds)
       {
        for(int el:vec)
        {
            cout<<el<<" ";
        }
        cout<<endl;
       }
       return ds[n][length.size()];
  }
int main(){
    vector<int>price={1,5,8,9,10,17,17,20};
  vector<int> length={1,2,3,4,5,6,7,8};
    cout<<"Rod Cutting Maximum profit-"<<maxprofit(price,length);
    return 0;
}