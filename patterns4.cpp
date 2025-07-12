//Character pyramid
#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n=4;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}