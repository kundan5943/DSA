#include<iostream>
using namespace std;
int MaxbalanceStr(string str)
 {
    int countR=0;
    int countL=0;
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='R')
        {
           countR++;
        }
        else
        {
           countL++;
        }

        if(countL==countR)
        {  
            ans++;
           
            countL=countR=0;
        }
    }
       return ans;
 }
int main(){
    string str="RLRRLLRLRRLL";
    cout<<MaxbalanceStr(str);
    return 0;
}