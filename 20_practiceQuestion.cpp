#include<iostream>
#include<string>
using namespace std;
int CountSubstring(string str1,int st,int ed,int n)
{    
    if(n==1)
     {
        return 1;

     }
     if(n<=0)
     {
        return 0;
     }
     
     int res=CountSubstring(str1,st+1,ed,n-1) + CountSubstring(str1,st,ed-1,n-1) - CountSubstring(str1,st+1,ed-1,n-2);

     if(str1[st]==str1[ed])
     {
        res++;  
     }
     return res;

}
int main(){
    string str1="abcab";
   
    int n=str1.size();
    cout<<CountSubstring(str1,0,n-1,n);
    return 0;
}