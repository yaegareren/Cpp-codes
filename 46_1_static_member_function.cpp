// STATIC MEMBER FUNCTIONS

/*
>> By declaring a member function as static, we make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed only by the class name and the scope resolution operator (::)

>> A static data member function can only access static data member, other static member functions and any other functions from outside the class. 

>> Static member functions have a class scope and they do not have access to the this pointer of the class. 

>> Static member functions can be used to determine whether the objects of the class have been created or not.

*/

#include <bits/stdc++.h>
using namespace std;

class Myclass { 
  public: 
  int x;
  static int count;

  // default constructor
  Myclass(){
    count ++;
  }

  static int getcount(){
    return count; 
  }
};

int Myclass::count=0; // initializing static data member

int main()
{
  
  cout<<"Initial count: "<<Myclass::getcount(); 
  // static data member was accessed witout creating an object

  Myclass obj1,obj2;
  cout<<"\nInitial count: "<<Myclass::getcount();
  return 0;
}

