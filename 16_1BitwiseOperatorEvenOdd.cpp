#include<iostream>
using namespace std;
void checkevenodd(int a)
{    


     if(!(a&1))
     {
        cout<<"it is even "<<endl;
     }
     else
     {
        cout<<"It is  odd "<<endl;
     }


}
int main(){
    int a=6;
    int b=5;
    checkevenodd(a);
    checkevenodd(b);
    return 0;
}