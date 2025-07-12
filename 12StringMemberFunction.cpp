//STRING MEMBER FUNCTION
#include<iostream>
using namespace std;

int main(){
    string str1="APNA COLLEGE";
    string str2="hii KUNDAN hii ram hii KUNDAN";
    //for finding lenth of string-
    cout<<str1.length()<<endl;

    //for finding value of string with index
    cout<<str2.at(5)<<endl;


    /*for find word in a string is present or not,if it is present then output will be starting index of the word ,
    if it is not presnt then it shows -1*/
    cout<<str2.find("hii")<<endl;
    cout<<str2.find("hii",5)<<endl;//if you want to find word hii after some index then simply mention index number
    cout<<str2.find("KUNDAN",10)<<endl;
    cout<<str2.find("aaditya")<<endl;//if it is not presnt then it give -1 or garbage value

    //for printing substring in output-
    cout<<str1.substr(0,4)<<endl;//using this we can print substring(some part) of string 
    cout<<str2.substr(4,6)<<endl;//'4' is starting index and '6' is size of substring
    return 0;
}