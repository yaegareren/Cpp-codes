/*
>> Inheritance allows us to define a class in terms of(from another) of another class.

>> Provides REUSABILITY and MAINTAINABILITY of code.

>> The idea of inheritance implements the IS-A relationship. For example, mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on

>>The class from which the new class inherits properties (data members and member functions) is called BASE CLASS and the new created class is called DERIVED CLASS.

>> Syntax - class derived-class: access specifier base-class
{
   // data members and member functions of derived class
}

>> Types of inheritance: 
   >> Single level inheritance
   >> Multi level inheritance
   >> Multiple inheritance
   >> Hybrid inheritance
   >> Hierarchial inheritance

class Base {
  public:
   int x;
  protected:
   int y
  private:
  int z;
};

class publicDerived: public base {
  // x is public
  // y is protected
  // z is not accessible from publicDerived
}
class protectedDerived: protected base {
  // x is protected
  // y is protected
  // z is not accessible from protectedDerived
}
class privateDerived: private base {
  // x is private
  // y is private
  // z is not accessible from privateDerived
}


*/

#include<bits/stdc++.h>
using namespace std;

class shape {

  protected:
   int width;
   int height;

  public:
   void setwidth(int w){
     width=w;
   }
  
  void setheight(int h){
    height=h;
  }
};

class rectangle : public shape{
  public:
   int getarea(){
     return (height * width);
   }
};
int main(void){
    rectangle rect;
    rect.setwidth(5);
    rect.setheight(7);

    cout<<"Total Area: "<<rect.getarea()<<endl;
    return 0;
}
