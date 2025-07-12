
#include<iostream>
using namespace std;
char kthcharacter(string &word,int k)
{
     if(word.size()>=k)
     {
        return word[k-1];
     }

     string genrstr;

     for(int i=0;i<word.size();i++)
     {

        genrstr+=char(1+int(word[i]));

     }

    word+=genrstr;
     return kthcharacter(word,k);

}
int main(){
   
    cout<<ch;
    string word="a";
    cout<<kthcharacter(word,5);
    return 0;
}