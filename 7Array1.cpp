#include<iostream>
using namespace std;

int main(){
    /*type 1*/ int marks[50];//only declaration of array without adding values
   /*type 2*/  int marks1[50]={1,2,3,4,5};
   /*type 3*/   int marks2[]={1,2,3,4,5,6};
  cout<<"size of marks is :"<<sizeof(marks)<<endl;
  cout<<"size of marks1 is :"<<sizeof(marks1)<<endl;
  cout<<"size of marks2 is :"<<sizeof(marks2)<<endl;
  cout<<marks[0]<<endl;/*This array marks will give all garbage value because you not stored any value in it*/
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;
  cout<<endl;
  cout<<marks1[0]<<endl;/*this array will give you right value until index 4 after that garbage values*/
  cout<<marks1[1]<<endl;
  cout<<marks1[2]<<endl;
  cout<<marks1[40]<<endl;
  cout<<marks1[49]<<endl;
  cout<<endl;
  cout<<marks2[0]<<endl;/* this a perfect array*/
  cout<<marks2[1]<<endl;
  cout<<marks2[2]<<endl;
    return 0;
}