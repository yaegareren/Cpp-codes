// OPERATOR OVERLOADING 

/*
>> c++ allows us to specify more than one definition for an operator in the same scope, which is called operator overloading 

>> most of the built in operators available in c++ can be redefined or overloaded

>> It is a type of polymorphism in which an operator is overloaded to give user defined meaning to it

>> Almost any operator can be overloaded but there are a few that can't be overloaded like: 
  >>> scope operator (::)
  >>> sizeof
  >>> member selector (.)
  >>> member pointer selector (*)
  >>> ternary operator (? :)
*/

#include<bits/stdc++.h>
using namespace std;

class weight {

  private: 
   int kg;

  public: 
   weight(){
    kg=0;
   }

   weight(int x){
    kg=x;
   }
   void printWeight(){
    cout<<"Weight in KG: "<<kg<<endl;
   }

   void operator ++(){ 
      kg++;
   }

   void operator ++(int){ 
      ++kg;
   }

   void operator --(){ 
      kg--;
   }

   void operator --(int){ 
      --kg;
   }
};

int main (){
  weight obj;
  obj.printWeight(); // prints 0
  ++obj;
  obj.printWeight(); // prints 1
  obj++; //obj.operator ++()
  obj.printWeight(); // prints 2

  --obj;
  obj.printWeight(); // prints 1
  obj--; //obj.operator --()
  obj.printWeight(); //prints 0

  return 0; 

}