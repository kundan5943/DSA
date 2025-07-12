/*kth row of pascal's triangle Given an integer rowIndex, return the rowIndexth (0-indexed) 
row of the Pascal's triangle. (Using only 0(rowIndex) space)*/
/*Pascal triangle means 
            Pascal's Triangle 
0row-            1 
1row-           11
2row-          121 
3row-         1331 
4row-        14641 
*/
#include<iostream>
using namespace std;

int getrow(int n)
{
    int arr[n+1]={0};
    arr[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            arr[j]+=arr[j-1];

        }
    }

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=2;
    getrow(n);
    getrow(4);
    getrow(6);

    return 0;
}