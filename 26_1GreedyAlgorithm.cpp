#include<iostream>
using namespace std;
int maxactivities(int start[],int end[],int n)
{
    int count=1;
    int currend=end[0];
    for(int i=1;i<n;i++)
    {
        if(currend<=start[i])
        {
            count++;
            currend=end[i];
        }

    }
    return count;
}
int main(){
    //This array shows activity start and end .One person can do only one activity at once.person can not allow to do multiple activity at ones. 
    int start[6]={1,3,0,5,8,5};
    int end[6]={2,4,6,7,9,9};
    int n=sizeof(start)/sizeof(int);
cout<<maxactivities(start,end,n);
    return 0;
}
