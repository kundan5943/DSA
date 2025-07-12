#include<iostream>
#include<unordered_map>
using namespace std;
void friendguess(string secret,string guess )
{
    int cow=0;
    int bull=0;
    unordered_map<char,int> m;
    for(int i=0;i<secret.size();i++)
    {
        if(secret[i]==guess[i])
        {

            bull++;
        }
        else
        {
            m[secret[i]]++;
        }
    }
    for(int i=0;i<guess.size();i++)
    {
        
        if(secret[i]!=guess[i]&&(m[guess[i]]>0))
        {
            cow++;
            m[guess[i]]--;
        }
    }
    
    string ans="";
    ans+=to_string(bull)+'A';
   
    ans+=to_string(cow)+'B';
  
    return ans;
    
}


int main(){
    string secret[4]={1,1,2,3};
    
    string guess[4]={0,1,1,1};
    friendguess(secret,guess);
    
    return 0;
}