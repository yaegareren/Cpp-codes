/*
Hybrid inheritance is implemented by combining more than one type of inheritance. For example: 
combining hierarchical inheritance and multiple inheritance 
*/

#include <bits/stdc++.h>
using namespace std;

class base{
  protected: int val;
};

class derived1 : virtual public base {
  public:
  derived1(){
    val=1;
  }

 void getValue(){
    cout<<"Derived 1 value of datamember is: "<<val;
  }

};

class derived2 : virtual public base {
  public:
  derived2(){
    val=2;
  }
 void getValue(){
    cout<<"Derived 2 value of datamember is: "<<val;
  }

};

class derived3: public derived1, derived2 {
  public: 
   void getValue(){
    //cout<<"Int value is: ";
    derived1::getValue(); // 2
    derived2::getValue(); // 2
   }

};

int main()
{
  derived3 obj;
  obj.getValue();

  return 0;
}