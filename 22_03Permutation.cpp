#include<iostream>
#include<string>
using namespace std;
void permutation(string str ,string ans)
{
     int n= str.size();
     if(n==0)
     {
        cout<<ans<<endl;
        return;
     }
     for(int i=0;i<str.size();i++)
     {
        
        char ch =str[0];
        string nextstr=str.substr(0,i)+str.substr(i+1,(n-i-1));
        permutation(nextstr,ans+ch);


     }
}
int main(){
    string str="ABC";
    string ans=" ";
    permutation(str,ans);
    return 0;
}