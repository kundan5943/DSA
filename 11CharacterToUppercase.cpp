#include<iostream>
#include<cstring>
using namespace std;
void ToUppercase(char word1[],int n)
{
    for(int i=0;i<n;i++)
    {   char ch=word1[i];
        if(ch>='A'&&ch<='Z')
        {
            continue;
        }
        else
        {
            word1[i]=ch-'a'+'A';
        }
    }
    cout<<"The uppercase word1 is: "<<word1<<endl;
}
void ToLowercase(char word2[],int n)
{
    for(int i=0;i<n;i++)
    {   
        if(word2[i]>='a'&& word2[i]<='z')
        {
            continue;
        }
        else
        {
           word2[i]=word2[i]-'A'+'a';
        }
    }
    cout<<"lowercase word2 is : "<<word2<<endl;
}
int main(){
    char word1[]="Kundan";
    ToUppercase(word1,strlen(word1));
    char word2[]="CHAudhaRI";
    ToLowercase(word2,strlen(word2));
    return 0;
}