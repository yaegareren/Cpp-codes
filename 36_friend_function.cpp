/*

A friend function of a class is defined outside that class scope but it has the right to access all private and protected members of the class.

Even though the prototypes for friend functions appear in the class definition, friends are not member function

They are needed when a class's private data members nees to be accessed directly without using object of that class.

operator overloading

*/

#include<bits/stdc++.h>
using namespace std;

class Distance {

  private: 
   int meters;

  public:
   Distance()
   {
     meters=0;
   }
   void displayData()
   {
     cout<<"Meters Value: "<<meters;
   }

   friend void addvalue(Distance &d); //passing the object by reference to access data members
 

};

void addvalue(Distance &d){
  d.meters=d.meters+5; //able to directly access private data members
}
int main(){
    Distance d1;
    d1.displayData();
  
    // the friend function call
    addvalue(d1);//pass by reference
    cout<<endl;
    
    d1.displayData();
    return 0;
}
