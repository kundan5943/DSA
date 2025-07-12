#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    char word[5];
    cout<<"enter your word: ";
    cin>>word; //when we cin character array they ignore word that come after whitespace 
   cout<<"Your word is "<<word<<endl;
    
    //for that problem we cin.getline(characterarray name,size,'*'for ending string)
    char word1[50];
    cout<<"again enter your word: ";
    cin.getline(word1,20,'*');
    cout<<"Your word is"<<word1<<endl;
    return 0;
}