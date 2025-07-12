#include<iostream>
#include<cstring>//this header included for strlen() function
using namespace std;
void ReverseCharArr(char ch[],int n)
{
    int st=0;
    int end=n-1;
    while(st<end)
    {
        swap(ch[st],ch[end]);
       
        st++;
        end--;
    }
    cout<<"Character array after reversing : "<<ch<<endl;
}
int main(){
    char ch[]="kundan";
    cout<<"character array before Reversing : "<<ch<<endl;
    ReverseCharArr(ch,strlen(ch));
    
cout<<"--------------------------------------"<<endl;
    char word[]="apna college";
    cout<<"character array before reversing :"<<word<<endl;
    ReverseCharArr(word,strlen(word));
   
    return 0;
}