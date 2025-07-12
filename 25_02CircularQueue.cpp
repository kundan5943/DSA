#include<iostream>
using namespace std;
class CircularQueue
{
     int * arr;
     int currsize;
     int capacity;
     int f=0;
     int r=-1;
     public:
     CircularQueue(int val)
     {
        arr=new int[val];
        capacity=val;
        currsize=0;
     }
     void push(int val)
     {    
          if (currsize==capacity)
          {
              cout<<"Queue is full"<<endl;
              return;
          }
          r=(r+1)%capacity;
           arr[r]=val;
           currsize++;

     }
     void pop()
     {
        if(empty())
        {   
            cout<<"Queue is empty"<<endl;
            return;
        }
        f=(f+1)%capacity;
        currsize--;

     }
    int empty()
     {
        if(currsize==0)
        {
            return true;
        }
        return false;

     }
     int front()
     {
        return arr[f];
     }
     void printCQ()
     {
       for(int i=0;i<capacity;i++)
       {
        cout<<arr[i]<<" ";
       }
       cout<<endl;
     }


};
int main(){
    CircularQueue obj(4);
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.pop();
  
    obj.push(5);
    
    obj.printCQ();
    obj.push(6);

    obj.printCQ();
    cout<<obj.front()<<endl;
    return 0;
}