
#include<iostream>
using namespace std;
void trap(int height[],int n)
{    
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1]; 

     cout<<"Leftmax array is: ";
     cout<<leftmax[0]<< " ";
    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],height[i]);
        cout<<leftmax[i]<<" ";
    }
    cout<<endl;
    cout<<"Right max array is: ";
    cout<<rightmax[n-1]<<" ";
    for(int j=n-2;j>=0;j--)
    {
        rightmax[j]=max(rightmax[j+1],height[j]);
        cout<<rightmax[j]<<" ";
    }
    cout<<endl;
    int totalwatertrap=0;
    for(int i=0;i<n;i++)
    {
        int currwatertrap=min(leftmax[i],rightmax[i])-height[i];
         if(currwatertrap>0)
        {
             totalwatertrap+=currwatertrap;
        }
    }
    cout<<"Total water trap is : "<<totalwatertrap<<endl;
}
int main(){
    int height[7]={4,2,0,6,3,2,5};//height of valley
    int n =sizeof(height)/sizeof(int);
    trap(height,n);
    return 0;
}