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

class Complex {
  private : int real, imag;

  public: 
    Complex(){
    real=0;
    imag=0;
  }

  Complex(int r , int i){
    real=r ;
    imag=i;
  }

  void print(){
    cout<<real<< " + "<<imag<<" i "<<endl;
  }

  Complex operator +(Complex c){
    Complex temp;
    temp.real= real+ c.real;
    temp.imag= imag + c.imag;

    return temp;
  }
};

int main (){
  Complex c1(5,4);
  Complex c2(2,3);
  Complex c3;
  c3 = c1+ c2;

  c3.print();
  return 0; 

}