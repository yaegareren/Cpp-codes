/*
A class can also be declared to be the friend of some other class. When we create a friend class then all the member functions of the friend class also become the friend of other class. This requires the condition that the friend becoming class must be first declared or defined (forward declaration). 

*/

#include<bits/stdc++.h>
using namespace std; 

class myclass1{
  friend class myclass2; // myclass2 is a friend of myclass1 

  private: 
  int x;

  public: 
   myclass1(int a){
     x=a;
   }
};

class myclass2{

  public: 
   void showdata(myclass1 obj){
     cout<<"X value is: "<<obj.x;
   }
};

int main(){
  myclass1 obj1(5);
  myclass2 obj2;
  obj2.showdata(obj1);

  return 0; 
}