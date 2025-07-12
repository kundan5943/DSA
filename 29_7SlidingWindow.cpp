#include<iostream>
#include<queue>
using namespace std;

class Window
{
     public:
     int indx;
     int val;

     Window(int indx,int val)
     {
          this->indx=indx;
          this->val=val;
     }
     bool operator < (const Window &obj)
     const
     {
        return this->val<obj.val;
     }
     
};
void PrintMaxElementinWindow(vector<int> arr,int k)
{   
    priority_queue<Window>pq;

     for(int i=0;i<k;i++)
     {
        pq.push(Window(i,arr[i]));
     }
     cout<<"Output: "<<pq.top().val<<" ";
     for(int i=k;i<arr.size();i++)
     {

        while(!pq.empty()&&pq.top().indx<=(i-k))
        {
            pq.pop();
        }

        pq.push(Window(i,arr[i]));
        cout<<pq.top().val<<" ";

     }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;//Window Size
    PrintMaxElementinWindow(arr,k);
    return 0;
}