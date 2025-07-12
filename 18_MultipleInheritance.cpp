#include<iostream>
#include<string>
using namespace std;
class Teacher
{   public:
      int salary;
      string subject;

};
class Student
{   public:
      int rollno;
      float cgpa;
};
class TA:public Teacher,public Student
{   public:
      string name;
};
int main(){
    
    TA obj1;
    obj1.name="kundan Chaudhari";
    obj1.rollno=13120;
    obj1.cgpa=9.1;
    obj1.salary=10000;
    obj1.subject="Engineering Mathematics";
    cout<<obj1.name<<endl;
    cout<<obj1.rollno<<endl;
    cout<<obj1.cgpa<<endl;
     cout<<obj1.salary<<endl;
      cout<<obj1.subject<<endl;
    return 0;
}