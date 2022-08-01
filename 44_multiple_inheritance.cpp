/*

Multiple inheritance is a feature of c++ where a class can inherit from more than one class

*/

#include<bits/stdc++.h>
using namespace std;

class A{
  public: 
   void printMessage()
   {
    cout<<"Class A print message function"<<endl;
   }
};

class B{
  public: 
   void printMessage()
   {
    cout<<"Class B print message function"<<endl;
   }    
  };

class AB: public A, public B{
  public: 
    void printMessage()
    {
      A::printMessage();
      B::printMessage();
     cout<<"Class AB print message function"<<endl;
    } 
  };


int main(){
  AB obj;
  obj.printMessage();

  return 0;
}