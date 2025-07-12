#include<iostream>
#include<string>
using namespace std;
string binaryString(int n,string ans ,int lastdigit)
{
    if(n==0)
    {   
        cout<<ans<<endl;
        return ans;
    }
    if(!(lastdigit))
    {
        binaryString(n-1,ans+'0',0);
        binaryString(n-1,ans+'1',1);
    }
    else{
        binaryString(n-1,ans+'0',0);
    }

}
int main(){
    string ans=" ";
    int n=3;
    binaryString(n,ans,0);
    return 0;
}