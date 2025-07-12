//for cout all character of a string we use loops
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="Apna College";
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<"-";
    }//we use for loop when we print string with a index
    cout<<endl;
    
    for(char ch:str)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
//---------------------------------------------------------------------------------
//extra example for each loop 
  //1  int arr[]={2,5,5,8,7};
    for(int n:arr)
    {
        cout<<n<<" ";
    }
    cout<<endl;

    char ch1[]="hii kundan";
    for(char ch:ch1)
    {
        cout<<ch<<" ";
    }
    return 0;
}