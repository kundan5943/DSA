#include<iostream>
#include<vector>
using namespace std;
class Heap{
    public:
    vector<int>vec;
    void push(int val)
    {
         vec.push_back(val);

         int x=vec.size()-1;//child node
         int prnt=(x-1)/2;//parent node
         while (prnt>=0&&vec[x]>vec[prnt])
         {
           swap(vec[x],vec[prnt]);
           x=prnt;
           prnt=(x-1)/2;

         }
         
    }
   void heapify (int i)
    {   
        if(i>=vec.size())
        {
            return;
        }
         int l= (i*2)+1;
         int r= (i*2)+2;
         int maxi=i;
         if(l<vec.size()&&vec[l]>vec[maxi])
         {
            maxi=l;
         }
         if(r<vec.size()&&vec[r]>vec[maxi])
         {
            maxi=r;
         }

         swap(vec[i],vec[maxi]);
         if(maxi!=i)
         {
              heapify(maxi);
         }
       
    }
    void pop()
    {
        //step1
        swap(vec[0],vec[vec.size()-1]);

        //step 2
        vec.pop_back();

        //step 3-heapify for fixing the 
         heapify(0);
        
    }
    int top()
    {
        return vec[0];
    }
    bool empty()
    {
        return vec.size()==0;
    }


};
int main(){
    Heap heap;
    heap.push(9);
     heap.push(4);
     heap.push(8);
     heap.push(1);
     heap.push(2); 
     heap.push(5);
  
   
    while(!heap.empty())
    {
        cout<<"Top = "<<heap.top()<<endl;
        heap.pop();
    }

    return 0;
}