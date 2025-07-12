//Default Copy constructor
#include<iostream>
using namespace std;
    class Car
    {
        public:
        string carname;
        int carprice;

        Car(string carname, long int carprice)
        {
            this->carname=carname;
            this->carprice=carprice;
        }
        
    };
int main(){
    
    Car c1("Buggati varon",100000);
    
    Car c2(c1);
    cout<<"carname : "<<c2.carname<<endl;
    cout<<"carprice : "<<c2.carprice<<endl;
    return 0;
}