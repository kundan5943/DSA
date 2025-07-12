#include<iostream>
#include<string>
using namespace std;
//Anagram means two strings  have equal length and they have same number of character (the pattern between two strings can different or same ) 
bool CheckAnagram(string str1,string str2)
{
    int count[50]={0};

    if(str1.length()!=str2.length())
    { cout<<"It is not valid"<<endl;
      return false;
    }
    for(int i=0;i<str1.length();i++)
    {  
        int idx=str1[i]-'a';
        count[idx]++;

    }
    
    for(int j=0;j<str2.length();j++)
    {
        int idx=str2[j]-'a';
        if(count[idx]==0)
        {   
            cout<<"It is not valid anagram"<<endl;
            return false;
        }
        count[idx]--;
    }
    cout<<"It is a valid anagram"<<endl;
    return true;
}
int main(){
    string str1="anagram";
    string str2="nagaram";
    string str3="namaram";
    CheckAnagram(str1,str2);

    CheckAnagram(str1,str3);
    
    return 0;
}