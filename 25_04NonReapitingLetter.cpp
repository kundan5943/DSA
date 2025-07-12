#include<iostream>
#include<queue>
using namespace std;
void Nonrepeatingletter(string str)
{   
    int freq[26]={0};
    queue<char> Q;
    for(int i=0;i<str.size();i++)
    {   
        char ch=str[i];
        Q.push(ch);
        freq[ch-'a']++;
        while(!Q.empty() && freq[Q.front()-'a']>1)
        {
              Q.pop();
        }

        if(!Q.empty())
        {
            cout<<Q.front()<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
    cout<<"This is the real non reapeating first number in a string:- "<<Q.front()<<endl;

}
int main(){

    string str="aabcckb";
    Nonrepeatingletter(str);

    return 0;
}