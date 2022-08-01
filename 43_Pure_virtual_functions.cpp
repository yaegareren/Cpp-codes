/*
>>Sometimes implementation of all function cannot be provided in a base class because we don't know the implementation. Such a class is called abstract class.

>>A pure virtual function (or abstract function) in C++ is a virtual function for which we don't have an implementation, we only declare it. A pure virtual function is declared by assigning 0 in declaration. 

>>Some important facts-
 >> A class is abstract if it has at least one pure virtual function

 >> We can have pointers and references of abstract class type

>> If we do not override the pure virtual function in derived class, then derived class also becomes abstract class

>> Abstract class cannot be instantiated.

*/

#include<bits/stdc++.h>
using namespace std;

class Shape{
  public: 
   virtual void getArea()=0;
};

class circle: public Shape{
  public: 
  void getArea(){
    cout<<"Enter circle radius: "<<endl;
    int r;
    cin>>r;
    cout<<"Area of a circle is: "<<(3.142*r*r);
  }
  };

class rectangle: public Shape{
  public: 
  void getArea(){
    cout<<"\nEnter length and breadth radius: "<<endl;
    int l,b;
    cin>>l>>b;
    cout<<"Area of a rectangle is: "<<(l*b);
  }
  };


int main(){
  circle c1;
  c1.getArea();

  rectangle r1;
  r1.getArea();
  return 0;
}