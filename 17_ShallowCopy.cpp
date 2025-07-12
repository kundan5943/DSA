#include<iostream>
using namespace std;
    class Car
    {
        public:
        string carname;
        int carprice;
        int*discount;

        Car(string carname, long int carprice)
        {
            this->carname=carname;
            this->carprice=carprice;
            discount=new int;
            *discount=20;
        }
        Car(Car &original)
        {//This work is by default done by compilier but we also able to do this
            carname=original.carname;
            carprice=original.carprice;
            discount=original.discount;
           

        }
        string getcarname()
        {
            return carname;
        }
        
    };
int main(){
    
    Car c1("Buggati varon",100000);
    
    Car c2(c1);
    cout<<"carname : "<<c2.carname<<endl;
    cout<<"carprice : "<<c2.carprice<<endl;
   cout<<*c2.discount;
    return 0;
}