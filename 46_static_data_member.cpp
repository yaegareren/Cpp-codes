// STATIC DATA MEMBERS 

/*

>> A static member is shared by all objects of the class

>> All static data is initialized with zero when the first object is created, if no other initialization is present.

>> We can't put it in the class definition but it can be initialized outside the class using the scope resolution operator :: to identify which class it belongs to. 

>> When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member. 

>> We don't need an object to call the static data member

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
};

int Myclass::count=0; // initializing static data member

int main()
{
  
  cout<<"Initial count: "<<Myclass::count; // static data member was accessed witout creating an object

  Myclass obj1,obj2;
  cout<<"\nInitial count: "<<Myclass::count;
  return 0;
}

