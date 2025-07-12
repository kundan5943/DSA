#include<iostream>
#include<string>
using namespace std;
string RemoveDuplicate(string str1,string ans,int i,int map[])
{   if(i==str1.length())
    {
        
        return ans;
    }
    int mapindex=int(str1[i]-'a');
    if(map[mapindex])
    {
        return RemoveDuplicate(str1,ans,i+1,map);
    }
    else{
        map[mapindex]=true;
        return RemoveDuplicate(str1,ans+str1[i],i+1,map);
    }
}
int main(){
    string str1="appna collegee";
    string ans=" ";
    int map1[26] = {false}; 
    cout<<RemoveDuplicate(str1,ans,0,map1)<<endl;
    
   
    string str2="apasonsifgijagnp";
    int map2[26]={false};
    cout<<RemoveDuplicate(str2,ans,0,map2)<<endl;
    return 0;
}