#include<iostream>
using namespace std;

class Bankaccount
{
    int accountnumber;
    int balance;
    public:
    Bankaccount(int ac,int ba)
    {
        accountnumber=ac;
        balance=ba;
    }
    void deposite(int d)
    {
        balance+=d;
        
    }
    void withdraw(int amount)
    {    
        if(amount<=balance)
        {
            balance-=amount;
        }   
        else
        {
           cout<<"You dont have that much balance"<<endl;
        }
        
        
    }
    int getbalance()
    {   cout<<"Your current balance is : "<<endl;
        return balance;
    }
};
int main(){
    Bankaccount cust1(14216,54000);
    cust1.deposite(2000);
    cout<<cust1.getbalance()<<endl;
    cust1.withdraw(62879);
    cust1.withdraw(4025);
    cout<<cust1.getbalance()<<endl;
    return 0;
}