//pointer arithmatic ptr+n or ptr -n)
#include<iostream>
using namespace std;
    void printarr1(int *ptr1,int n)
    {
         for(int i=0;i<n;i++)
         {
            cout<<*ptr1<<endl;
            
            ptr1 =ptr1+1;//type1
         }

    }
    void printarr2(int *ptr2,int n)
    {
        for (int i=0;i<n;i++)
        {
            cout<<*(ptr2+i)<<endl;//type 2
        }
    }
int main(){
    int a=4;
    int *ptr =&a;
    cout<<ptr<<endl;//first Address
    ptr=ptr+3;//address updated by 3*4byte(int)(12 spaces skip ahead)
    cout<<ptr<<endl;
    ptr=ptr-3;//address updated by 3*4byte(int)(12 spaces skip backward in memory)
    cout<<ptr<<endl;
// following code for declaring arr and calling printarr function 
    int arr[5]={4,8,7,6,2};
   int  n=sizeof(arr)/sizeof(int);
    printarr1(arr,n);
    printarr2(arr,n);




    return 0;
}