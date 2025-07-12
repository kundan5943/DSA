#include<iostream>
#include<string>
using namespace std;
void TotalSubset(string str,string subset)
{
    if(str.size()==0)
    {
        cout<<subset<<endl;
        return;
    }

    char ch=str[0];
    TotalSubset(str.substr(1,(str.size()-1)),subset+ch);//YES
    TotalSubset(str.substr(1,(str.size()-1)),subset);//NO

}
int main(){
    
    string str1="ABC";
    string subset=" ";
    TotalSubset(str1,subset);

    return 0;
}