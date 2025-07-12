#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void findSpan(vector<int> stocks,vector<int> span)
{
    stack <int> s;
    s.push(0);
    for(int i=1;i<stocks.size();i++)
    {
    int currprice=stocks[i];
    while(!s.empty() && currprice>=stocks[s.top()])
    {
        s.pop();
    }
    if(s.empty())
    {
        span[i]=i+1;
      
    }
    else
   { 
    int prevhigh=s.top();
    span[i]=i-prevhigh;
    
   }
   s.push(i);

    }
    for(int i=0;i<span.size();i++)
    {
        cout<<"Day"<<i<<"-"<<span[i]<<endl;

    }

}
int main(){
    vector<int>stocks={100,80,60,70,60,85,100};
    vector<int>span={0,0,0,0,0,0,0};
    span[0]=1;
    findSpan(stocks,span);
    return 0;
}