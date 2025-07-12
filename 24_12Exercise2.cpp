#include<iostream>
#include<stack>
using namespace std;
int WaterTrap(int height[],int n)
{
    stack<int>s;
    int totalwater=0;
    for(int i=0;i<n;i++)
    {

      while(!s.empty() &&height[i]>height[s.top()])
      {
        int top =s.top();
        s.pop();

        if(s.empty())break;

        
        int distance=i-s.top()-1;
        int boundedheight=min(height[i],height[s.top()])-height[top];
        totalwater+=distance*boundedheight;


       
      }
      s.push(i);
    }
    return totalwater;
}


int main(){
  int height[7]={4,2,0,6,3,2,5};
  int n=sizeof(height)/sizeof(int);
  cout<<WaterTrap(height,n);
  return 0;
}