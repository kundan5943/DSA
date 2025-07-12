/*
📌 ASCII Concept:
Characters like '0', '1', ..., '9' have specific integer values in the ASCII table.

Char	ASCII
'0'	48
'1'	49
'2'	50
...	...
'9'	57

🧠 Logic Behind char - '0':
Suppose c = '5'

ASCII of '5' = 53

ASCII of '0' = 48

So, '5' - '0' = 53 - 48 = 5

Hence, it converts the digit character to its actual number.*/
#include<iostream>
#include<string>
using namespace std;

string largestOddNumber(string str)
{
   
    for(int i=str.length()-1;i>=0;i--)
    {
        int temp=str[i]-'0';
        if(temp&1)
        {    
           return str.substr(0,i+1);
        }
        
    }

     
     }
    

int main(){
    string str="52528";
    cout<<largestOddNumber(str);
    return 0;
}