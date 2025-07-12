#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
   // str1="hello";its give you error because its not possible to intialize sting to character
    char str2[]="hello";
    //first Copy function
    strcpy(str1,str2);//strcpy(destination string,source string)
    cout<<str1<<endl;

    //second Concantenate function

    char str3[]=" world";
    strcat(str2,str3);
    cout<<str2<<endl;

    //third Compare function
    char str5[]="abc";
    char str6[]="xyz";
    char str7[]="zbc";
    cout<<strcmp(str5,str6)<<endl;//kya string 5 greater hai string 6 se agar ha to positive value varna negative
    cout<<strcmp(str5,str6)<<endl;
    
    cout<<strcmp(str7,str6)<<endl;
    cout<<strcmp(str6,str7)<<endl;//kya string 6 greater hai string 7 se agar ha to positive value varna negative 

    
   return 0;
}