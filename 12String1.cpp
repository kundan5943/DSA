#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="hello";//Array of size 5
    cout<<str<<endl;
    str="helloworld";//Array of size 10,Strings dynamic (their size can be change at runtime)((imp))
    cout<<str<<endl;

    str="hello world";
    cout<<str<<endl;

  string str1;
    /*when you type some word and then whitespace and then again word so when a whitespace occur it simply
     ignore next string or word */
     //cout<<str1<<endl;

     //for that problem we use getline(cin,string name,'*' for end string or you can use other operator also)
    getline(cin,str1,'*');
    cout<<str1<<endl;

    return 0;
}