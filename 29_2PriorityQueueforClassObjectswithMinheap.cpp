#include<iostream>
#include<queue>
using namespace std;
class Student
{

    public:
    string name;
    int marks;

    Student(string name,int marks)
    {
        this->name=name;
        this->marks=marks;

    }
    bool operator <(const Student &obj)
    const{
             
      return this->marks>obj.marks;//for minheap
         }
    //We can also store the objects  in priority queue by  Student name
    /*
    bool operator<(const Student &obj)
    const{
    return this->name>obj.name;
    
    }*/
};
int main(){
    priority_queue<Student>pq;
    pq.push(Student("kundan",90));
    pq.push(Student("Aaditya",96));
    pq.push(Student("Ram",80));
    pq.push(Student("krishna",99));

    while(!pq.empty())
    {
        cout<<"Student Name- "<<pq.top().name<<", Student Marks- "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}
