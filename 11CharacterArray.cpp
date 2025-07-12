#include<iostream>
using namespace std;

int main(){
    char ch='a';
    char ch1[] ="word";//first way to deaclare char array
    char ch2[6]="hello";//second way ,sizeof array is 5 but i 1 extra size for "\0"
    char ch3[]={'h','e','l','l','o','\0'};
    char ch4[5]={'w','o','r','d','\0'};
    
    cout<<ch1<<endl;//chararray name is use print all the value in an array
    cout<<ch2<<endl;
    cout<<ch3<<endl;
    cout<<ch4<<endl;
    cout<<ch1[0]<<endl;//we can do also like this
    cout<<ch1[1]<<endl;
    cout<<ch1[2]<<endl;
    cout<<ch1[3]<<endl;
   
    return 0;
}