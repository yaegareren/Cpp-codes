/*
If derived class defines same function as defined in its base class, it is known as function overriding

If you create an object of the derived class and call the member function which exists in both the cases (base and derived ), the member function of the derived class is invoked and the function of the base class is not ignored.

It enables us to provide a specific implementation of the function which is already provided by its base class


It is different from function overloading as functions are same


class base{
  ...........

  public:
   void getdata(){
     .........
   }
};

class derived: public base 
{
  ...........
  public: 
   void getdata()
   {
     ........
     base::getdata(); function call2
     ........

   }
};

int main()
{
  derived obj;
  obj.getdata(); //function call1
}
*/
#include<iostream>
using namespace std;

class animal{
  public:
   void makesound()
   {
     cout<<"Animal sound";
   }
};

class dog : public animal
{
     public: 

     void makesound()
   {
     cout<<"Dogs bark";
   }
};

class cat : public animal
{
     public: 

     void makesound()
   {
     cout<<"Cats meow";
   }
};

int main()
{
  animal obj1;
  obj1.makesound();
  cout<<endl;

  dog obj2;
  obj2.makesound(); 
  cout<<endl;   

  cat obj3;
  obj3.makesound();    
  
}



