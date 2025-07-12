#include<iostream>
#include<unordered_map>
using namespace std;
//VALID ANAGRAM
bool CheckValidAnagram(string s1,string s2)
{   
    if(s1.length()!=s2.length())
    {
        return false;
    }
    unordered_map<char,int>m;
    for(int i=0;i<s1.length();i++)
    {
         
        if(m.count(s1[i]))
        {
            m[s1[i]]++;
        }
        else
        {
            m[s1[i]]=1;
        }
    }

    for(int i=0;i<s2.length();i++)
    {
        if(m.count(s2[i]))
        {
            m[s2[i]]--;
            if(m[s2[i]]==0)
            {
                m.erase(s2[i]);
            }
        }
        else
        {
            return false;
        }
    }

    if(m.size()!=0)
    {
        return false;
    }

    return true;

}
int main(){
    string s1="race";
    string s2="care";
    cout<<"Result:-"<<endl;
    if(CheckValidAnagram(s1,s2))
    {
        cout<<"String 1 and string 2 is Equal"<<endl;
    }
    else{
         cout<<"String 1 and string 2 is not Equal"<<endl;
    }


    
    return 0;
}