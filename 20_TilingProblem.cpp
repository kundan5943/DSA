#include<iostream>
using namespace std;
int tilingproblem(int n)
{
    if (n==1 || n==0)
    {
        return 1;
    }
   int ans1= tilingproblem(n-1);//vertical

   int ans2=tilingproblem(n-2);//Horizontal

   return ans1+ans2;



}
int main(){
    int n=4;
    //one tile is 2*1 where 2 is height and 1 is base
    //so we want to find 2*n;
     cout<<tilingproblem(3)<<endl;
     cout<<tilingproblem(4)<<endl;
     cout<<tilingproblem(5)<<endl;
    return 0;
}