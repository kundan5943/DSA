#include<iostream>
#include<cstring>
using namespace std;
int isPalindrome(char arr[],int n)
{
    int st=0;
    int end=n-1;
    while(st<=end)
    {
    if(arr[st]!=arr[end])
    {   
        cout<<"it is not a palindrome"<<endl;
        return false;
    }
     st++;
     end--;
    }
    cout<<"it is a valid palindrome"<<endl;
    return true;
}
int main(){
    char word[]={'r','a','c','e','c','a','r','\0'};
   
    isPalindrome(word,strlen(word));
    return 0;
}