//Multilevel Pointer
//Important
#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr1=&a;
 
    int **ptr2=&ptr1;

    int ***ptr3=&ptr2;//this is a pointer that points to one pointer that already points to another pointer
/*simply remember if a pointer points to a variable then use one '*'.
  if a pointer that points to a pointer  then use two '**'.
  if a pointer that points to a pointer and that pointer points to another pointer then use three '***'  .     
*/
    cout<<"a address is "<<&a<<endl;
    
    cout<<"pointer 1 address (ptr1) is "<<ptr2<<endl;

    cout<<"a addressis "<<*ptr2<<endl;/*it give you adress of 'a' because i use * so ptr2 go to ptr1 address display
     value of that ptr1,in ptr1 there is addres thatswhy its display address of a*/

//if you want value of 'a' by using ptr2 then you need use * two times
     
     cout<<**ptr2<<endl;

//if you want value of 'a' by using ptr3 then you need use * three times 
   cout<<***ptr3<<endl;
    return 0;
}