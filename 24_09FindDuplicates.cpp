#include<iostream>
#include<stack>
using namespace std;
/*Input: "((a+b)+c)"
Output: FALSE (No duplicates)

Input: "(a+(b)/c)"
Output: FALSE (No duplicates)

Input: "(a+b)+((c))"
Output: TRUE (Duplicate brackets around c)

Input: "(((a)))"
Output: TRUE (Multiple levels of unnecessary brackets)
*/
bool isDuplicate(string str)
{
    stack<char> s;
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        if(ch!=')')
        {
            s.push(ch);
        }
        else
        {
            if(s.top()=='(')
            {
                return true;
            }

            while(s.top()!='(')
            {
                s.pop();

            }
            s.pop();
        }
    }
    return false;
}
int main(){
    string str1="((a+b)+c)";
    if(isDuplicate(str1))
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    
    string str2="((a+b)+((a)))";
    if(isDuplicate(str2))
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    string str3="(((a)))";
    if(isDuplicate(str3))
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    return 0;
}