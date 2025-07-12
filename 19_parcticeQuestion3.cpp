#include<iostream>
#include<string>
using namespace std;
class Person
{
    protected:
    string name;
    int age;
};
class Student:protected Person
{   private:
    int std_id;

    public:
    Student(string name,int age,int std_id)
    {
        this->name=name;
        this->age=age;
        this->std_id=std_id;
    }
    void studentinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"std_id : "<<std_id<<endl;
    }
};
int main(){
    Student obj1("kundan",19,13120);
    obj1.studentinfo();
    return 0;
}