#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int FindMaximumArea(vector<int> height)
{    stack<int>s;
    int n=height.size();
    vector<int> nsl(n); 
    vector<int> nsr(n);
     //Next smaller Left
     nsl[0]=-1;
     s.push(0);
     for(int i=1;i<nsl.size();i++)
     {
         int curr1=height[i];
         while(!s.empty() && curr1<=height[s.top()])
         {
            s.pop();
         }
         if(s.empty())
         {
            nsl[i]=-1;
         }
         else
         {
            nsl[i]=s.top();
         }

        s.push(i);
     }

    
     while(!s.empty())
     {
        s.pop();
     }

      //Next smaller right
     
      nsr[n-1]=-1;
      s.push(n-1);
      for(int i=n-2;i>=0;i--)
      {
         int curr2=height[i];
         while(!s.empty() && curr2<=height[s.top()])
         {
            s.pop();
         }
         
         if(s.empty())
         {
            nsr[i]=n;
         }
         else
         { 
            nsr[i]=s.top();

         }
         s.push(i);
      }

      int maxarea=0;
      for(int i=0;i<height.size();i++)
      {
         int area=height[i]*(nsr[i]-nsl[i]-1);

         maxarea=max(area,maxarea);

      }
return maxarea;

}
int main(){
   vector<int> height={2,1,5,6,2,3};
   cout<<FindMaximumArea(height);
    cout<<endl;
   vector<int> height2 = {6, 2, 5, 4, 5, 1, 6};
   cout<<FindMaximumArea(height2);

    return 0;
}