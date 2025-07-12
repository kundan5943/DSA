#include<iostream>
#include<stack>
using namespace std;
bool ValidParanthesis(string str)
{
     stack<char> s;
     for(int i=0;i<str.size();i++)
     {
        char ch =str[i];
        if((ch=='(')|| (ch=='{' )||(ch=='['))
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else//matching
            {
                
                if((s.top()=='('&& ch ==')')|| ( s.top()=='{'&&ch=='}') ||( s.top()=='['&&ch==']'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
     }
    
    
   
     return s.empty();
}
int main(){
    string str1="({[()]})";
    if (ValidParanthesis(str1))
    {
     cout<<"It is a valid paranthesis"<<endl;
    }
    else{
     cout<<"It is not valid paranethesis"<<endl;
    } 
  

    string str2="({}{}}})";
    if (ValidParanthesis(str2))
    {
     cout<<"It is a valid paranthesis"<<endl;
    }
    else{
     cout<<"It is not valid paranethesis"<<endl;
    } 
   
    return 0;
}