
/* VIRTUAL FUNCTIONS IN C++ 

>> A virtual function is a member function which is declared within base class and is re-defined by (overriden) by derived class

>> When you refer to a derived class object using a pointer or a reference to the base class you can call a virtual function for that object and execute the derived class's version of the function

 >>> Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call

 >>> They are mainly used to achieve run time polymorphism

 >>> Functions are declared with a virtual keyword in base class. 

 >>> The resolving of function call is done at run-time

*/

/* PURE VIRTUAL FUNCTIONS & ABSTRACT CLASS

>> Sometimes implementation of all function cannot be provided in a base class because we don't know the implementation. Such a class is called abstract class.

>> A pure virtual function (or abstract function) in c++ is a virtual function for which we don't have implementation, we only declare it. A pure virutal function is declared by assigning 0 in its declaration. 

 >>> A class is abstract if it has at least one pure virtual function 

 >>> We can have pointers and references of same datatype

 >>> If we do not override the pure virtual function in derived class, then derived class also becomes abstract class

 >>>  Abstract classes cannot be instantiated

*/


#include<bits/stdc++.h>
using namespace std;

class mybase{

  public:
   void show()
   {
    cout<<"Base class show function called"<<endl;
   }

   virtual void print(){
     cout<<"Base class print function called"<<endl; 
   }
};

class myderived : public mybase {

   void show()
   {
    cout<<"Derived class show function called"<<endl;
   }

   void print(){
     cout<<"Derived class print function called"<<endl; 
   }
};

int main(){
    mybase *baseptr;
    myderived derivedobj;

    baseptr=&derivedobj;

// when base class pointer is pointing to derived class object, derived class print function was called but base class show function was called 

 // runtime polymorphism 

    baseptr->print(); // derived class print function was called
    baseptr->show(); // base class show function was called 

    return 0;
}




