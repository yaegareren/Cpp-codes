/* PASS BY VALUE:

>> The call/pass by value method of passing the arguments to a function copies the actual value of an
   argument into the formal parameter of the function.

>> In this case, changes made to the parameters inside the function have no effect on the argument.

>> By default, C++ uses call by value to pass arguments. In general, this means that code within a 
   function cannot alter the arguments used to call a function. 

*/

/*       
               ---------------------PASS BY VALUE CODE-----------------------------

#include<bits/stdc++.h>
using namespace std;

void passbyvalue(int x, int y);
int main(){
    int a=5, b=6;
    cout<<"Before Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    passbyvalue(a,b);

    cout<<"After Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    return 0;
}

void passbyvalue(int x, int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}

*/

/* PASS BY REFERENCE

>> The call/ pass by reference method of passing arguments to a function copies the reference of an
   argument into the formal parameter.

>> Inside the function, the reference is used to access the actual argument used in the call. This
   means changes made to the parameter affect the passed argument. 

>> To pass the value by reference, argument reference is passed to the functions just like any other
   value 

*/

/*   
                 ---------------------PASS BY REFERENCE CODE-----------------------------

#include<bits/stdc++.h>
using namespace std;

void passbyreference(int &x, int &y);
int main(){
    int a=5, b=6;
    cout<<"Before Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    passbyreference(a,b);

    cout<<"After Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    return 0;
}

void passbyreference(int &x, int &y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}

*/

/* PASS BY POINTER or CALL BY ADDRESS

>> The call by pointer method of passing the arguments to a function copies the address of an argument into the
   formal parameter. 

>> Inside the function, the address is used to access the actual argument used in the call. This means that changes
   made to the parameter affect the passed argument.

>> To pass the value by pointer, argument pointers are passed to the functions just like any other value.  

*/

#include<bits/stdc++.h>
using namespace std;

void passbypointer(int *x, int *y);
int main(){
    int a=5, b=6;
    cout<<"Before Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    passbypointer(&a,&b);

    cout<<"After Swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    return 0;
}

void passbypointer(int *x, int *y){
  int temp;
  temp= *x;
  *x=*y;
  *y=temp;
}
