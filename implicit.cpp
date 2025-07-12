//Implicite conversion
#include<iostream>

#include<iomanip>
using namespace std;

int main(){
    cout<<(10/3)<<endl;
    cout<<(10/3.0)<<endl;
    cout<<setprecision(12)<<(12.56678910/6.2)<<endl;
    cout<<('A'+2)<<endl;
     cout<<('b'+2)<<endl;
      cout<<('A'+0)<<endl;
    return 0;
}